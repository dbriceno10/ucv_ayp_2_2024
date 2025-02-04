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
  return x;
}

int obtenerMaximoExponente(int x, int primo)
{
  int acumulado = 1;
  while (x % primo == 0)
  {
    acumulado = acumulado * primo;
    x = x / primo;
  }
  return acumulado;
}

void intercambiar(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int solicitarNumero()
{
  int a = 0;
  cout << "ingrese numero" << endl;
  cin >> a;
  return a;
}

int maximo(int a, int b)
{
  if (a > b)
  {
    return a;
  }
  else
  {
    return b;
  }
}

int main(int argc, char const *argv[])
{
  /* code */
  int a = solicitarNumero(), b = solicitarNumero();
  if (b > a)
  {
    intercambiar(a, b);
  }
  int mcm = 1, primo = 2;
  while (primo <= a)
  {
    int exponenteA = obtenerMaximoExponente(a, primo);
    int exponenteB = obtenerMaximoExponente(b, primo);
    mcm = mcm * maximo(exponenteA, exponenteB);
    primo = siguientePrimo(primo);
  }

  cout << "MCM entre " << a << " y " << b << " es " << mcm << endl;

  return 0;
}
