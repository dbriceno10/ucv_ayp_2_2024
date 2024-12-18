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

int main(int argc, char const *argv[])
{
  // Obtener vida inicial
  cout << "Vida" << endl;
  cin >> life;
  // Obtener las dimensiones
  cout << "Dimensiones X Y" << endl;
  cin >> aux;
  dimensions = aux;
  cin >> aux;
  dimensions = dimensions * 10 + aux;
  // Obtener el numero de objetos
  cout << "Nro de Objetos" << endl;
  cin >> objects;
  char value;
  for (int i = 0; i < objects; i++)
  {
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
  for (int i; i < movements; i++)
  {
    cout << "Movimiento w a s d" << endl;
    cin >> value;
    cout << "Movimiento seleccionado: " << value << endl;
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