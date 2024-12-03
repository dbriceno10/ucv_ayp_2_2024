#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  int n = 0;
  cout << "introduzca numero de 4 digitos" << endl;
  cin >> n;

  int copia = n, aux = 0;

  aux = aux + (copia % 10) * 1000;
  copia = copia / 10;

  aux = aux + (copia % 10) * 100;
  copia = copia / 10;

  aux = aux + (copia % 10) * 10;
  copia = copia / 10;

  aux = aux + copia;

  cout << aux << endl;

  return 0;
}
