#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  int a = 2, c = 1;
  float b = c - 1 + a;
  bool i1 = b * b > 4 || pow(a, 4) >= c * c + 20;
  float i2 = 1 + 15 / pow(2, 3) / b;
  float i3 = b * (a + 1) - b / a / 10;
  int i4 = c * (5 % 3) - a / 4;
  cout << i4 << endl;
  return 0;
}
