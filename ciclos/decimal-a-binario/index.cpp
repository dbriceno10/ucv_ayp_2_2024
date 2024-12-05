#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n = 0;
  cout << "Introduzca numero" << endl;
  cin >> n;
  int copia = n, c = 0;
  long aux = 0;
  while (copia > 0)
  {
    //*vamos mulplicando por potencias de 10 para ir posicionando al ultimo obtenido de primero
    aux += (copia % 2) * pow(10, c);
    copia = copia / 2;
    c++;
  }
  cout << n << " ---> " << aux << endl;
  return 0;
}
