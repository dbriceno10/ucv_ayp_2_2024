#include <iostream>
#include <cmath>
using namespace std;
int life = 0, dimensions = 0, objects = 0, cObjects = 0, entranceXY = 0, exitXY = 0, movements = 0, limitX = 0, limitY = 0;
int cWall = 0, cTeasure = 0, cTrap = 0, cPortal = 0;
long wallXY = 0, teasureXY = 0, trapXY, portalAXY = 0, portalBXY = 0;
const char entrance = 'E', out = 'S', wall = '#', teasure = 'T', trap = 'X', portal = 'P';

int readXY()
{
  int aux = 0, coord = -1;
  cin >> aux;
  coord = aux;
  cin >> aux;
  coord = coord * 10 + aux;
  return coord;
}

void getWall(char value)
{
  if (value == wall)
  {
    cout << "Muro X Y" << endl;
    int XY = readXY();
    wallXY = wallXY * 100 + XY;
    cWall++;
    cObjects++;
  }
}

void getTeasure(char value)
{
  if (value == teasure)
  {
    cout << "Tesoro X Y" << endl;
    int XY = readXY();
    teasureXY = teasureXY * 100 + XY;
    cTeasure++;
    cObjects++;
  }
}

void getTrap(char value)
{
  if (value == trap)
  {
    cout << "Trampa X Y" << endl;
    int XY = readXY();
    trapXY = trapXY * 100 + XY;
    cTrap++;
    cObjects++;
  }
}

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
    cObjects++;
  }
}

void getEntrance(char value)
{
  if (value == entrance)
  {
    cout << "Entrada X Y" << endl;
    cObjects++;
    entranceXY = readXY();
  }
}
void getExit(char value)
{
  if (value == out)
  {
    cout << "Salida X Y" << endl;
    exitXY = readXY();
    cObjects++;
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

int main(int argc, char const *argv[])
{
  // Obtener vida inicial
  cout << "Vida" << endl;
  cin >> life;
  // Obtener las dimensiones
  cout << "Dimensiones X Y" << endl;
  cin >> limitX;
  dimensions = limitX;
  cin >> limitY;
  dimensions = dimensions * 10 + limitY;
  // Obtener el numero de objetos
  cout << "Nro de Objetos" << endl;
  cin >> objects;
  for (int i = 0; i < objects; i++)
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
  int x = getX(entranceXY), y = getY(entranceXY);
  for (int i; i < movements; i++)
  {
    char movement;
    cout << "Movimiento w a s d" << endl;
    cin >> movement;
    if (movement == 'w')
    {
      if ((y + 1 <= limitY) && !isMatch(x, y + 1, wallXY))
      {
        y++;
      }
    }
    if (movement == 's')
    {
      if ((y - 1 >= 0) && !isMatch(x, y - 1, wallXY))
      {
        y--;
      }
    }
    if (movement == 'd')
    {
      if ((x + 1 <= limitX) && !isMatch(x + 1, y, wallXY))
      {
        x++;
      }
    }
    if (movement == 'a')
    {
      if ((x - 1 >= 0) && !isMatch(x - 1, y, wallXY))
      {
        x--;
      }
    }
    cout << "Posicion " << "(" << x << "," << y << ")" << endl;
  }
  cout << "Nro de objetos " << cObjects << endl;
  cout << "Coordenadas de muros # " << wallXY << endl;
  cout << "Coordenadas de trampas X " << trapXY << endl;
  cout << "Coordenadas de tesoros T " << teasureXY << endl;
  cout << "Coordenadas de portal A P " << portalAXY << endl;
  cout << "Coordenadas de portal B P " << portalBXY << endl;
  cout << "Entrada E" << entranceXY << endl;
  cout << "Salida S" << exitXY << endl;
  cout << "Cantidad de objetos " << objects << endl;
  cout << "Vida inicial " << life << endl;
  cout << "Dimensiones " << dimensions << endl;
  cout << "Movimientos " << movements << endl;
  return 0;
}