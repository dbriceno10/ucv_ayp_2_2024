#include <iostream>
using namespace std;

void contarParImpar(int array[], int length, int &cPar, int &cImpar)
{
  for (int i = 0; i < length; i++)
  {
    if (array[i] % 2 == 0)
    {
      cPar++;
    }
    else
    {
      cImpar++;
    }
  }
}

int main(int argc, char const *argv[])
{
  /* code */
  const int length = 5;
  int array[length] = {2, 95, 4, 9, 3};
  int cPar = 0, cImpar = 0;
  contarParImpar(array, length, cPar, cImpar);
  cout << "Cantidad de pares: " << cPar << endl;
  cout << "Cantidad de impares: " << cImpar << endl;
  return 0;
}
