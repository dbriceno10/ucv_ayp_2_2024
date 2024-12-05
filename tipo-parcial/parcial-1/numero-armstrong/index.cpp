#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  int n = 0;
  cout << "Introduzca un numero de hasta 5 digitos" << endl;
  cin >> n;
  if (n == 0)
  {
    cout << "Es numero de Armstromg" << endl;
    return 0;
  }
  if (to_string(n).length() > 5)
  {
    cout << "Entrada invalida" << endl;
    return 0;
  }
  if (n < 0)
  {
    // si es negativo
    n = abs(n);
  }
  int copia = n, d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, c = 0;
  // primera iteracion
  d1 = copia / 10000;
  copia = copia % 10000;
  if (d1 > 0)
  {
    c++;
  }
  // segunda iteracion
  d2 = copia / 1000;
  copia = copia % 1000;
  if (d2 > 0)
  {
    c++;
  }
  // tercera iteracion
  d3 = copia / 100;
  copia = copia % 100;
  if (d3 > 0)
  {
    c++;
  }
  // cuarta iteracion
  d4 = copia / 10;
  copia = copia % 10;
  if (d4 > 0)
  {
    c++;
  }
  // quinta iteracion
  d5 = copia;
  if (d5 > 0)
  {
    c++;
  }
  const int aux = pow(d1, c) + pow(d2, c) + pow(d3, c) + pow(d4, c) + pow(d5, c);
  if (aux == n)
  {
    cout << "Es numero de Armstromg" << endl;
  }
  else
  {
    cout << "No es numero de Armstromg" << endl;
  }
  // cout << "aux: " << aux << " d1: " << d1 << " d2 " << d2 << " d3: " << d3 << " d4: " << d4 << " d5: " << d5 << " c: " << c << endl;
  return 0;
}
