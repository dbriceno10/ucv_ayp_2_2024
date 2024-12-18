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

int main(int argc, char const *argv[])
{
  /* code */
  int pj = 0;
  int x = getX(pj);
  int y = getY(pj);

  for (int i = 0; i < 10; i++)
  {
    char movement;
    cout << "Movimiento w a s d" << endl;
    cin >> movement;
    if (movement == 'w')
    {
      y++;
    }
    if (movement == 's')
    {
      y--;
    }
    if (movement == 'd')
    {
      x++;
    }
    if (movement == 'a')
    {
      x--;
    }
    cout << "Posicion " << "(" << x << "," << y << ")" << endl;
  }
  pj = getCoord(x, y);
  cout << "pj: " << pj << endl;
  return 0;
}
