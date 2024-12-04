#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  bool a = 22;
  int p = 14.2, q = -4, r = 6;
  float s = p / 2.0 + q * 3 - r + 1;

  bool i1 = (p + q) * r < s || pow(q, 3) > (float)(p / 2) - s + a || a;
  // bool aux1i1 = (p + q) * r < s;
  // bool aux2i1 = pow(q, 3) > (float)(p / 2) - s + a;
  float i2 = (int(s) * p + 100) + q - (r % p - q);
  bool i3 = (s - p / q) * r <= q && (int)(r * s) / p > q;
  float i4 = p - 2 * p / q + (s + 5);
  // cout << i4 << endl;

  // int fecha1 = 1010666;
  // int dia = 0, mes = 0, ano = 0, copia1 = fecha1;
  // dia = copia1 / 100000;
  // copia1 = copia1 % 100000;
  // mes = copia1 / 1000;
  // copia1 = copia1 % 1000;
  // ano = copia1;

  // cout << dia << '/' << mes << '/' << ano << endl;
  return 0;
}
