#include <iostream>
using namespace std;

int x, y, z;

void println(int x, int y, int z)
{
  cout << "x: " << x << " y: " << y << " z: " << z << endl;
}

int a2(int &y, int z)
{
  x = 5;
  y = 6;
  z = 7;
  println(x, y, z);
  return 2 * x;
}

void a1(int x, int &y)
{
  x = 4;
  println(x, y, z);
  y = a2(z, y);
  println(x, y, z);
}

int main()
{
  x = 1;
  y = 2;
  z = 3;
  a1(z, x);
  println(x, y, a2(y, x));
  return 0;
}