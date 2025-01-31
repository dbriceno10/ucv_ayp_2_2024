#include <iostream>
using namespace std;

bool esPrimo(int x)
{
  if (x <= 0)
  {
    return false;
  }
  if (x == 1)
  {
    return true;
  }
  if (x == 2)
  {
    return true;
  }
  if (x == 3)
  {
    return true;
  }
  if (x == 5)
  {
    return true;
  }
  if (x == 7)
  {
    return true;
  }
  for (int i = 2; i < x; i++)
  {
    if (x % i == 0)
    {
      return false;
    }
  }
  return true;
}

int siguientePrimo(int x)
{
  do
  {
    x = x + 1;
  } while (!esPrimo(x));
}

int obtenerMaximoExponente(int x, int primo)
{
  int acumulado = 1;
  while (x % primo == 0)
  {
    acumulado = acumulado * primo;
    x = x / primo;
  }
}

int intercambiar(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int main(int argc, char const *argv[])
{
  /* code */
  int a = 0;
  return 0;
}
