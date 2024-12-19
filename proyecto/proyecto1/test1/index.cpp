#include <iostream>
#include <cmath>
using namespace std;

int life = 0, lifeCopy = 0, dimensions = 0, objects = 0, entranceXY = 0, exitXY = 0, movements = 0, limitX = 0, limitY = 0, x = 0, y = 0, eX = 0, eY = 0, code = 0;
const int minX = 0, minY = 0;
int cTeasure = 0, cTrap = 0, foundTeasures = 0, foundTraps = 0, cPortal = 0;
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
    cout << "Muro X Y" << endl;
    int XY = readXY();
    wallXY = wallXY * 100 + XY;
  }
}

//*Guardar corrdenadas de tesoros
void getTeasure(char value)
{
  if (value == teasure)
  {
    cout << "Tesoro X Y" << endl;
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
    cout << "Trampa X Y" << endl;
    int XY = readXY();
    trapXY = trapXY * 100 + XY;
    cTrap++;
  }
}

//*Guardar coordenadas de portales
void getPortal(char value)
{
  if (value == portal)
  {
    cout << "Portal XA YA XB YB" << endl;
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
    cout << "Entrada X Y" << endl;
    entranceXY = readXY();
  }
}

//*Guardar las coordenadas de la salida
void getExit(char value)
{
  if (value == out)
  {
    cout << "Salida X Y" << endl;
    exitXY = readXY();
  }
}

int getCoord(int x, int y)
{
  int coord = x * 10 + y;
  return coord;
}

int getX(int coord)
{
  int x = coord / 10;
  return x;
}

int getY(int coord)
{
  int y = coord % 10;
  return y;
}

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
  default:
    cout << "Movimiento Bloqueado" << endl;
    break;
  }
}

//*Validamos si el usuario consumio todos sus movimientos
bool isTrapped(int i)
{
  bool b = 0;
  if (i == movements)
  {
    b = 1;
    bool aux = isMatch(x, y, exitXY);
    // TODO Debemos validar el caso de encontrar todos los tesoros
    if (aux)
    {
      if (foundTeasures < cTeasure)
      {
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
      code = 4;
    }
  }
  return b;
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
      //*Encontramos un tesoro, guardamos sus coordenadas
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
  for (int i = 1; i <= cPortal; i++)
  {
    int coordA = copyA % 100;
    int coordB = copyB % 100;
    if (coordA == coord)
    {
      cout << "Posicion del portal (" << x << "," << y << ")" << endl;
      x = getX(coordB);
      y = getY(coordB);
      break;
    }
    if (coordB == coord)
    {
      cout << "Posicion del portal (" << x << "," << y << ")" << endl;
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
  cout << "Vida" << endl;
  cin >> life;
  lifeCopy = life;
  // Obtener las dimensiones
  cout << "Dimensiones M N" << endl;
  cin >> limitX;
  limitX;
  dimensions = limitX;
  cin >> limitY;
  limitY;
  dimensions = dimensions * 10 + limitY;
  // Obtener el numero de objetos
  cout << "Nro de Objetos" << endl;
  cin >> objects;
  for (int i = 1; i <= objects; i++)
  {
    char value;
    cout << "Objeto" << endl;
    cin >> value;
    getWall(value);
    getEntrance(value);
    getExit(value);
    getTeasure(value);
    getTrap(value);
    getPortal(value);
  }
  // Obtenemos el numero de movimientos
  cout << "Nro de Movimientos" << endl;
  cin >> movements;
  // Obtener posicion inicial
  x = getX(entranceXY);
  y = getY(entranceXY);
  // Obtener coordenadas de la salida
  // eX = getX(exitXY);
  // eY = getY(exitXY);
  for (int i = 1; i <= movements; i++)
  {
    char movement;
    cout << "Movimiento w a s d" << endl;
    cin >> movement;
    if (movement == 'w')
    {
      if ((y + 1 <= limitY - 1) && !isMatch(x, y + 1, wallXY))
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
      if ((x + 1 <= limitX - 1) && !isMatch(x + 1, y, wallXY))
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
    isTeasure();
    bool winner = isWinner();
    if (winner)
    {
      cout << "Posicion " << "(" << x << "," << y << ")" << " Vida: " << lifeCopy << endl;
      break;
    }
    bool trapped = isTrapped(i);
    if (trapped)
    {
      cout << "Posicion " << "(" << x << "," << y << ")" << " Vida: " << lifeCopy << endl;
      break;
    }
    isTrap();
    if (lifeCopy <= 0)
    {
      cout << "Posicion " << "(" << x << "," << y << ")" << " Vida: " << lifeCopy << endl;

      printMessage(2);
      break;
    }
    isPortal();
    cout
        << "Posicion " << "(" << x << "," << y << ")" << " Vida: " << lifeCopy << endl;
  }
  // cout << "Nro de objetos " << cObjects << endl;
  // cout << "Coordenadas de muros # " << wallXY << endl;
  // cout << "Coordenadas de trampas X " << trapXY << endl;
  // cout << "Coordenadas de tesoros T " << teasureXY << endl;
  // cout << "Coordenadas de portal A P " << portalAXY << endl;
  // cout << "Coordenadas de portal B P " << portalBXY << endl;
  // cout << "Entrada E" << entranceXY << endl;
  // cout << "Salida S" << exitXY << endl;
  // cout << "Cantidad de objetos " << objects << endl;
  // cout << "Vida inicial " << life << endl;
  // cout << "Dimensiones " << dimensions << endl;
  // cout << "Movimientos " << movements << endl;
  // cout << "Posicion Final" << "(" << x << "," << y << ")" << " Vida: " << lifeCopy << endl;
  cout << "TESOROS: " << foundTeasures << endl;
  cout << "TRAMPAS: " << foundTraps << endl;
  cout << "VIDA: " << lifeCopy << endl;
  printMessage(code);
  return 0;
}