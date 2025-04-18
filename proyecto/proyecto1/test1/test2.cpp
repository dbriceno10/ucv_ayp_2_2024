#include <iostream>
using namespace std;

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

int getCoord(int x, int y)
{
  int coord = x * 10 + y;
  return coord;
}

void isMatch(int x, int y, int objects)
{
  int coord = getCoord(x, y);
  int copy = objects;
  bool match = 0;
  while (copy > 0)
  {
    int aux = copy % 100;
    if (aux == coord)
    {
      match = 1;
    }
    copy = copy / 100;
  }
  if (match)
  {
    cout << "hay match" << endl;
  }
}

int main(int argc, char const *argv[])
{
  /* code */
  int pj = 0, limitX = 5, limitY = 5, objets = 1223444555;
  int x = getX(pj);
  int y = getY(pj);

  for (int i = 0; i < 10; i++)
  {
    char movement;
    cout << "Movimiento w a s d" << endl;
    cin >> movement;
    if (movement == 'w')
    {
      if (y + 1 <= limitY)
      {
        y++;
      }
    }
    if (movement == 's')
    {
      if (y - 1 >= 0)
      {
        y--;
      }
    }
    if (movement == 'd')
    {
      if (x + 1 <= limitX)
      {
        x++;
      }
    }
    if (movement == 'a')
    {
      if (x - 1 >= 0)
      {
        x--;
      }
    }
    cout << "Posicion " << "(" << x << "," << y << ")" << endl;
    isMatch(x, y, objets);
  }
  pj = getCoord(x, y);
  cout << "pj: " << pj << endl;
  return 0;
}
