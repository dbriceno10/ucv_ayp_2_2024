#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
  /* code */
  int n = 0;
  cout << "Introduzca binario de 4 digitos" << endl;
  cin >> n;
  int copia = n, aux = 0, bit = 0;

  bit = copia % 10;
  copia = copia / 10;
  aux = aux + pow(2, 0) * bit;

  bit = copia % 10;
  copia = copia / 10;
  aux = aux + pow(2, 1) * bit * 10;

  bit = copia % 10;
  copia = copia / 10;
  aux = aux + pow(2, 2) * bit * 100;

  aux = aux + pow(2, 3) * copia * 1000;

  cout << aux << endl;

  return 0;
}
