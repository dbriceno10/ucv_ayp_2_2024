#include <iostream>
#include <cmath>
using namespace std;
int life = 0, dimensions = 0, objects = 0, cWall = 1, entranceXY = -1, exitXY = -1, aux = 0;
int wall1 = -1, wall2 = -1, wall3 = -1, wall4 = -1, wall5 = -1, wall6 = -1, wall7 = -1, wall8 = -1, wall9 = -1, wall10 = -1;
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
    switch (cWall)
    {
    case 1:
    {
      wall1 = readXY();
      cout << "Muro 1 #" << wall1 << endl;
      cWall++;
      break;
    }
    case 2:
    {
      wall2 = readXY();
      cout << "Muro 2 #" << wall2 << endl;
      cWall++;
      break;
    }
    case 3:
    {
      wall3 = readXY();
      cout << "Muro 3 #" << wall3 << endl;
      cWall++;
      break;
    }
    case 4:
    {
      wall4 = readXY();
      cout << "Muro 4 #" << wall4 << endl;
      cWall++;
      break;
    }
    case 5:
    {
      wall5 = readXY();
      cout << "Muro 5 #" << wall5 << endl;
      cWall++;
      break;
    }
    case 6:
    {
      wall1 = readXY();
      cout << "Muro 6 #" << wall6 << endl;
      cWall++;
      break;
    }
    case 7:
    {
      wall7 = readXY();
      cout << "Muro 8 #" << wall8 << endl;
      cWall++;
      break;
    }
    case 8:
    {
      wall8 = readXY();
      cout << "Muro 8 #" << wall8 << endl;
      cWall++;
      break;
    }
    case 9:
    {
      wall9 = readXY();
      cout << "Muro 9 #" << wall9 << endl;
      cWall++;
      break;
    }
    case 10:
    {
      wall10 = readXY();
      cout << "Muro 10 #" << wall10 << endl;
      cWall++;
      break;
    }
    default:
      break;
    }
  }
}

void getEntrance(char value)
{
  if (value == entrance)
  {
    entranceXY = readXY();
    cout << "Entrada E" << entranceXY << endl;
  }
}
void getExit(char value)
{
  if (value == out)
  {
    exitXY = readXY();
    cout << "Salida S" << exitXY << endl;
  }
}

int main(int argc, char const *argv[])
{
  cin >> life;
  cin >> aux;
  dimensions = aux;
  cin >> aux;
  dimensions = dimensions * 10 + aux;
  cout << life << endl;
  cout << dimensions << endl;
  cin >> objects;
  cout << objects << endl;
  char value;
  int c = 0;
  while (cin >> value)
  {
    cout << value << endl;
    getWall(value);
    getEntrance(value);
    getExit(value);
    c++;
  }
  cout << "Nro de iteraciones " << c << endl;
  return 0;
}