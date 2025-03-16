#include <iostream>
using namespace std;

int a = 2, b = 4, c = 5, counter = 1;

void print(int x, int y, int z)
{
  cout << counter << ") " << x << " " << y << " " << z << endl;
  counter++;
}

int a0(int &a, int c)
{
  print(a, b, c);
  return a + b + c;
}

int a1(int &b, int c, int &a)
{
  // cout << "&b: " << b << " c: " << c << " &a: " << a << endl;
  for (int i = 0; i < c; i++)
  {
    b += i;
    // cout << "b +=i: " << b << endl;
  }
  {
    int a = 10;
    c = a;
    print(b, c, a);
  }
  return a0(a, b);
}

int main(int argc, char const *argv[])
{
  int a = 3;
  print(a, b, c);
  a = a1(a, b, c);
  print(b, c, a);
  b = a0(c, a);
  print(a, b, c);
  return 0;
}
