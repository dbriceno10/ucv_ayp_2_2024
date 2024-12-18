#include <iostream>
#include <cmath>
using namespace std;
int life = 0, dimensions = 0, objects = 0, cObjects = 0, entranceXY = 0, exitXY = 0, movements = 0, aux = 0;
int wallXY = 0, cWall = 0;
int teasureXY = 0, cTeasure = 0;
int trapXY = 0, cTrap = 0;
int portalAXY = 0, portalBXY = 0, cPortal = 0;
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
    cObjects++;
    entranceXY = readXY();
  }
}
void getExit(char value)
{
  if (value == out)
  {
    cObjects++;
    exitXY = readXY();
  }
}

int main(int argc, char const *argv[])
{
  // Obtener vida inicial
  cin >> life;
  // Obtener las dimensiones
  cin >> aux;
  dimensions = aux;
  cin >> aux;
  dimensions = dimensions * 10 + aux;
  // Obtener el numero de objetos
  cin >> objects;
  char value;
  // Obtener objetos y guardar sus coordenadas
  while (cin >> value)
  {
    getWall(value);
    getEntrance(value);
    getExit(value);
    getTeasure(value);
    getTrap(value);
    getPortal(value);
    // Cuando hayamos obtenido todos los objetos salimos
    if (cObjects == objects)
    {
      break;
    }
  }
  // Obtenemos el numro de movimientos
  cin >> movements;
  while (cin >> value)
  {
    cout << value << endl;
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