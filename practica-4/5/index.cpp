#include <iostream>
#include <cmath>
using namespace std;
int leerBinario()
{
  int n = 0, contador = 0, binario = 0;
  cout << "Introduzca una secuencia de numeros entre 0 y 1, -1 para terminar la secuencia" << endl;
  while (n == 0 || n == 1)
  {
    cin >> n;
    if (n == 0 || n == 1)
    {
      binario = binario * 10 + n;
      contador++;
    }
  }
  return binario;
}

int obtenerDecimal(int numeros)
{
  int copia = numeros, decimal = 0, bit = 0, contador = 0;
  while (copia > 0)
  {
    bit = copia % 10;
    copia = copia / 10;
    decimal = decimal + pow(2, contador) * bit;
    contador++;
  }

  return decimal;
}

int main(int argc, char const *argv[])
{
  /* code */
  int binario = leerBinario();
  int decimal = obtenerDecimal(binario);
  cout << "El numero binario " << binario << " en decimal es " << decimal << endl;
  return 0;
}