#include <iostream>
#include <cmath>
using namespace std;
int life = 0, dimensions = 0, objects = 0, cWall = 1, cTeasure = 1, cTrap = 1, cPortal = 1, cObjects = 0, entranceXY = -1, exitXY = -1, aux = 0;
int wall1 = -1, wall2 = -1, wall3 = -1, wall4 = -1, wall5 = -1, wall6 = -1, wall7 = -1, wall8 = -1, wall9 = -1, wall10 = -1;
int teasure1 = -1, teasure2 = -1, teasure3 = -1, teasure4 = -1, teasure5 = -1, teasure6 = -1, teasure7 = -1, teasure8 = -1, teasure9 = -1, teasure10 = -1;
int trap1 = -1, trap2 = -1, trap3 = -1, trap4 = -1, trap5 = -1, trap6 = -1, trap7 = -1, trap8 = -1, trap9 = -1, trap10 = -1;
int portalA1 = -1, portalA2 = -1, portalA3 = -1, portalA4 = -1, portalA5 = -1, portalA6 = -1, portalA7 = -1, portalA8 = -1, portalA9 = -1, portalA10 = -1;
int portalB1 = -1, portalB2 = -1, portalB3 = -1, portalB4 = -1, portalB5 = -1, portalB6 = -1, portalB7 = -1, portalB8 = -1, portalB9 = -1, portalB10 = -1;
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
    cObjects++;
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

void getTeasure(char value)
{
  if (value == teasure)
  {
    cObjects++;
    switch (cTeasure)
    {
    case 1:
    {
      teasure1 = readXY();
      cout << "Tesoro 1 T" << teasure1 << endl;
      cTeasure++;
      break;
    }
    case 2:
    {
      teasure2 = readXY();
      cout << "Tesoro 2 T" << teasure2 << endl;
      cTeasure++;
      break;
    }
    case 3:
    {
      teasure3 = readXY();
      cout << "Tesoro 3 T" << teasure3 << endl;
      cTeasure++;
      break;
    }
    case 4:
    {
      teasure4 = readXY();
      cout << "Tesoro 4 T" << teasure5 << endl;
      cTeasure++;
      break;
    }
    case 5:
    {
      teasure5 = readXY();
      cout << "Tesoro 5 T" << teasure5 << endl;
      cTeasure++;
      break;
    }
    case 6:
    {
      teasure6 = readXY();
      cout << "Tesoro 6 T" << teasure6 << endl;
      cTeasure++;
      break;
    }
    case 7:
    {
      teasure7 = readXY();
      cout << "Tesoro 7 T" << teasure7 << endl;
      cTeasure++;
      break;
    }
    case 8:
    {
      teasure8 = readXY();
      cout << "Tesoro 8 T" << teasure8 << endl;
      cTeasure++;
      break;
    }
    case 9:
    {
      teasure9 = readXY();
      cout << "Tesoro 9 T" << teasure9 << endl;
      cTeasure++;
      break;
    }
    case 10:
    {
      teasure10 = readXY();
      cout << "Tesoro 10 T" << teasure10 << endl;
      cTeasure++;
      break;
    }
    default:
      break;
    }
  }
}

void getTrap(char value)
{
  if (value == trap)
  {
    cObjects++;
    switch (cTrap)
    {
    case 1:
    {
      trap1 = readXY();
      cout << "Trampa 1 X" << trap1 << endl;
      cTrap++;
      break;
    }
    case 2:
    {
      trap2 = readXY();
      cout << "Trampa 2 X" << trap2 << endl;
      cTrap++;
      break;
    }
    case 3:
    {
      trap3 = readXY();
      cout << "Trampa 3 X" << trap3 << endl;
      cTrap++;
      break;
    }
    case 4:
    {
      trap4 = readXY();
      cout << "Trampa 4 X" << trap4 << endl;
      cTrap++;
      break;
    }
    case 5:
    {
      trap5 = readXY();
      cout << "Trampa 5 X" << trap5 << endl;
      cTrap++;
      break;
    }
    case 6:
    {
      trap6 = readXY();
      cout << "Trampa 6 X" << trap6 << endl;
      cTrap++;
      break;
    }
    case 7:
    {
      trap7 = readXY();
      cout << "Trampa 7 X" << trap7 << endl;
      cTrap++;
      break;
    }
    case 8:
    {
      trap1 = readXY();
      cout << "Trampa 8 X" << trap8 << endl;
      cTrap++;
      break;
    }
    case 9:
    {
      trap1 = readXY();
      cout << "Trampa 9 X" << trap9 << endl;
      cTrap++;
      break;
    }
    case 10:
    {
      trap10 = readXY();
      cout << "Trampa 10 X" << trap10 << endl;
      cTrap++;
      break;
    }
    default:
      break;
    }
  }
}

void getPortal(char value)
{
  if (value == portal)
  {
    cObjects++;
    switch (cPortal)
    {
    case 1:
    {
      portalA1 = readXY();
      portalB1 = readXY();
      cout << "Portal1 P A:" << portalA1 << " B:" << portalB1 << endl;
      cPortal++;
      break;
    }
    case 2:
    {
      portalA2 = readXY();
      portalB2 = readXY();
      cout << "Portal2 P A:" << portalA2 << " B:" << portalB2 << endl;
      cPortal++;
      break;
    }
    case 3:
    {
      portalA3 = readXY();
      portalB3 = readXY();
      cout << "Portal3 P A:" << portalA3 << " B:" << portalB3 << endl;
      cPortal++;
      break;
    }
    case 4:
    {
      portalA4 = readXY();
      portalB4 = readXY();
      cout << "Portal4 P A:" << portalA4 << " B:" << portalB4 << endl;
      cPortal++;
      break;
    }
    case 5:
    {
      portalA5 = readXY();
      portalB5 = readXY();
      cout << "Portal1 P 5:" << portalA5 << " B:" << portalB5 << endl;
      cPortal++;
      break;
    }
    case 6:
    {
      portalA6 = readXY();
      portalB6 = readXY();
      cout << "Portal6 P A:" << portalA6 << " B:" << portalB6 << endl;
      cPortal++;
      break;
    }
    case 7:
    {
      portalA7 = readXY();
      portalB7 = readXY();
      cout << "Portal7 P A:" << portalA7 << " B:" << portalB7 << endl;
      cPortal++;
      break;
    }
    case 8:
    {
      portalA8 = readXY();
      portalB8 = readXY();
      cout << "Portal8 P A:" << portalA8 << " B:" << portalB8 << endl;
      cPortal++;
      break;
    }
    case 9:
    {
      portalA9 = readXY();
      portalB9 = readXY();
      cout << "Portal9 P A:" << portalA9 << " B:" << portalB9 << endl;
      cPortal++;
      break;
    }
    case 10:
    {
      portalA10 = readXY();
      portalB10 = readXY();
      cout << "Portal10 P A:" << portalA10 << " B:" << portalB10 << endl;
      cPortal++;
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
    cObjects++;
    entranceXY = readXY();
    cout << "Entrada E" << entranceXY << endl;
  }
}
void getExit(char value)
{
  if (value == out)
  {
    cObjects++;
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
    // cout << value << endl;
    getWall(value);
    getEntrance(value);
    getExit(value);
    getTeasure(value);
    getTrap(value);
    getPortal(value);
    c++;
  }
  cout << "Nro de iteraciones " << c << endl;
  cout << "Nro de objetos " << cObjects << endl;

  return 0;
}