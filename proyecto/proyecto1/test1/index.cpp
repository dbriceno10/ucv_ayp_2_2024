#include <iostream>
#include <cmath>
using namespace std;

int life = 0, lifeCopy = 0, objects = 0, entranceXY = 0, exitXY = 0, movements = 0, limitX = 0, limitY = 0, x = 0, y = 0, code = 0;
const int minX = 0, minY = 0;
int cTeasure = 0, foundTeasures = 0, foundTraps = 0, cPortal = 0;
long wallXY = 0, teasureXY = 0, trapXY, portalAXY = 0, portalBXY = 0, teasureObtainedXY = -1;
const char entrance = 'E', out = 'S', wall = '#', teasure = 'T', trap = 'X', portal = 'P';

//*Leer coordenadas para los objetos
int readXY()
{
  int aux = 0, coord = 0;
  cin >> aux;
  coord = aux;
  cin >> aux;
  coord = coord * 10 + aux;
  return coord;
}

//*Guardar coordenadas de muros
void getWall(char value)
{
  if (value == wall)
  {
    int XY = readXY();
    wallXY = wallXY * 100 + XY;
  }
}

//*Guardar corrdenadas de tesoros
void getTeasure(char value)
{
  if (value == teasure)
  {
    int XY = readXY();
    teasureXY = teasureXY * 100 + XY;
    cTeasure++;
  }
}

//*Guardar coordenadas de trampas
void getTrap(char value)
{
  if (value == trap)
  {
    int XY = readXY();
    trapXY = trapXY * 100 + XY;
  }
}

//*Guardar coordenadas de portales
void getPortal(char value)
{
  if (value == portal)
  {
    int XYA = readXY();
    int XYB = readXY();
    portalAXY = portalAXY * 100 + XYA;
    portalBXY = portalBXY * 100 + XYB;
    cPortal++;
  }
}

//*Guardar las corrdenadas de la entrada
void getEntrance(char value)
{
  if (value == entrance)
  {
    entranceXY = readXY();
  }
}

//*Guardar las coordenadas de la salida
void getExit(char value)
{
  if (value == out)
  {
    exitXY = readXY();
  }
}

//*Entrada x,y salida xy
int getCoord(int x, int y)
{
  int coord = x * 10 + y;
  return coord;
}

//*Entrada x,y salida x
int getX(int coord)
{
  int x = coord / 10;
  return x;
}

//*Entrada x,y salida y
int getY(int coord)
{
  int y = coord % 10;
  return y;
}

//*Saber si tenemos una coincidencia con la posicion actual respecto a alguna posicion guardada, si caemos en algun objeto
bool isMatch(int x, int y, long coords)
{
  int coord = getCoord(x, y);
  long copy = coords;
  bool match = 0;
  while (copy > 0)
  {
    long aux = copy % 100;
    if (aux == coord)
    {
      match = 1;
    }
    copy = copy / 100;
  }
  return match;
}

//*Para imprimir los mensajes necesarios segun sea el caso
void printMessage(int value)
{
  switch (value)
  {
  case 1:
  {
    cout << "LOGRADO" << endl;
    break;
  }
  case 2:
  {
    cout << "MUERTO" << endl;
    break;
  }
  case 3:
  {
    cout << "SORPRENDENTE" << endl;
    break;
  }
  case 4:
  {
    cout << "ATRAPADO" << endl;
    break;
  }
  case 5:
  {
    cout << "Movimiento Bloqueado" << endl;
    break;
  }
  default:
    break;
  }
}

//*Validamos si el usuario consumio todos sus movimientos
void isTrapped(int i)
{
  // Si consumio tidos sus movimientos, vamos terminar el programa, validamos si gano o quedo atrapado
  if (i == movements)
  {
    bool aux = isMatch(x, y, exitXY);
    if (aux)
    {
      if (foundTeasures < cTeasure)
      {
        // LLego a la salida sin encontrar todos los tesoros
        code = 1;
      }
      else
      {
        // Encontro todos los tesoros
        code = 3;
      }
    }
    else
    {
      // Quedo atrapado
      code = 4;
    }
  }
}

//*Gana el juego
bool isWinner()
{
  bool b = 0;
  bool aux = isMatch(x, y, exitXY);
  if (aux)
  {
    b = 1;
    if (foundTeasures < cTeasure)
    {
      // No encontro todos los tesoros
      code = 1;
    }
    else
    {
      // Encontro todos los tesoros
      code = 3;
    }
  }
  return b;
}

//*Validar si el jugador cae en una trampa
void isTrap()
{
  bool aux = isMatch(x, y, trapXY);
  if (aux)
  {
    lifeCopy -= 10;
    if (lifeCopy < 0)
    {
      lifeCopy = 0;
    }
    foundTraps++;
  }
}

//*Sumar vida si el jugador encuentra un tesoro
void addLife()
{
  if (lifeCopy + 20 >= life)
  {
    lifeCopy = life;
  }
  else
  {
    lifeCopy += 20;
  }
}

//*Validar si encontramos un tesoro
void isTeasure()
{
  // Validamos si habiamos encontrado un tesoro antes
  if (teasureObtainedXY < 0)
  {
    bool aux = isMatch(x, y, teasureXY);
    if (aux)
    {
      // Encontramos un tesoro por primera vez, guardamos sus coordenadas para saber que ya lo encontramos
      teasureObtainedXY = getCoord(x, y);
      addLife();
      foundTeasures++;
    }
  }
  else
  {
    bool found = isMatch(x, y, teasureObtainedXY);
    if (!found)
    {
      // Encontramos un tesoro, guardamos sus coordenadas
      bool aux = isMatch(x, y, teasureXY);
      if (aux)
      {
        teasureObtainedXY = teasureObtainedXY * 100 + getCoord(x, y);
        addLife();
        foundTeasures++;
      }
    }
  }
}

//*Validar si cae en un portal y cambiar posicion
void isPortal()
{
  int coord = getCoord(x, y);
  long copyA = portalAXY;
  long copyB = portalBXY;
  // Recorremos las coordenadas de los portales guardados, si encontramos una cocincidencia a, salimos a la posicion en b y viceversa
  for (int i = 1; i <= cPortal; i++)
  {
    int coordA = copyA % 100;
    int coordB = copyB % 100;
    if (coordA == coord)
    {
      x = getX(coordB);
      y = getY(coordB);
      break;
    }
    if (coordB == coord)
    {
      x = getX(coordA);
      y = getY(coordA);
      break;
    }
    copyA = copyA / 100;
    copyB = copyB / 100;
  }
}

int main(int argc, char const *argv[])
{
  // Obtener vida inicial
  cin >> life;
  lifeCopy = life;
  // Limites del mapa
  cin >> limitX;
  limitX;
  cin >> limitY;
  limitY;
  // Obtener el numero de objetos
  cin >> objects;
  // Obtener los objetos y guadar sus posiciones
  for (int i = 1; i <= objects; i++)
  {
    char value;
    cin >> value;
    getWall(value);
    getEntrance(value);
    getExit(value);
    getTeasure(value);
    getTrap(value);
    getPortal(value);
  }
  // Obtenemos el numero de movimientos
  cin >> movements;
  // Obtener posicion inicial
  x = getX(entranceXY);
  y = getY(entranceXY);
  // Valdiamos los movimientos del usuario, vamos a estar validando si se intenta salir del mapa, chocar contra un muro o si cae en algun objeto
  for (int i = 1; i <= movements; i++)
  {
    // leemos el movimiento
    char movement;
    cin >> movement;
    if (movement == 'w')
    {
      if ((y + 1 <= limitY) && !isMatch(x, y + 1, wallXY))
      {
        y++;
      }
      else
      {
        printMessage(5);
      }
    }
    if (movement == 's')
    {
      if ((y - 1 >= minY) && !isMatch(x, y - 1, wallXY))
      {
        y--;
      }
      else
      {
        printMessage(5);
      }
    }
    if (movement == 'd')
    {
      if ((x + 1 <= limitX) && !isMatch(x + 1, y, wallXY))
      {
        x++;
      }
      else
      {
        printMessage(5);
      }
    }
    if (movement == 'a')
    {
      if ((x - 1 >= minX) && !isMatch(x - 1, y, wallXY))
      {
        x--;
      }
      else
      {
        printMessage(5);
      }
    }
    // Validamos si encuentra un tesoro
    isTeasure();
    // Validamos si llego a la salida
    bool winner = isWinner();
    if (winner)
    {
      break;
    }
    // validamos si cayo en una trampa
    isTrap();
    // validamos si su vida llega a 0
    if (lifeCopy <= 0)
    {
      code = 2;
      break;
    }
    // validamos si cae en un portal
    isPortal();
    // Validamos si se acabaron los movimientos
    isTrapped(i);
  }
  // Terminamos el programa e imprimimos las salidas
  cout << "TESOROS: " << foundTeasures << endl;
  cout << "TRAMPAS: " << foundTraps << endl;
  cout << "VIDA: " << lifeCopy << endl;
  printMessage(code);
  return 0;
}