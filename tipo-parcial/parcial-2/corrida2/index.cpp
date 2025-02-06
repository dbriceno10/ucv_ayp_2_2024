#include <iostream>
using namespace std;
int x = 9, y = 6, z = 3;
int Arr[3] = {10, 20, 30};
int counter = 1;

void origin()
{
  cout << " x: " << x << " y: " << y << " z: " << z << endl;
}
void print(int x, int y, int z)
{
  cout << counter << ") " << x << " " << y << " " << z << endl;
  counter++;
}

void f1(int &y, int B[3])
{
  for (int i = 0; i < z; i++)
  {
    y = y + B[i];
  }
}

int f2(int x, int &y)
{
  x = 1;
  //origin();
  print(x, y, z);
  y = 2 * z + x;
  //origin();
  print(x, y, z);
  return y;
}

int main(int argc, char const *argv[])
{
  //origin();
  print(x, y, z);
  f1(y, Arr);
  //origin();
  print(x, y, z);
  z = f2(y, x);
  //origin();
  print(x, y, z);
  return 0;
}
