#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  int n = 0;
  cout << "Introduzca un numero" << endl;
  cin >> n;
  int copia = n, contador = 0, capicua = 0;
  while (copia > 0)
  {
    int aux = copia % 10;
    copia = copia / 10;
    capicua = capicua * 10 + aux;
  }
  cout << capicua << endl;
  return 0;
}
