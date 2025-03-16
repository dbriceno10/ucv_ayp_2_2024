#include <iostream>
using namespace std;

// Función para verificar si un número es primo
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

// Función para encontrar el siguiente número primo
int siguientePrimo(int x)
{
  do
  {
    x = x + 1;
  } while (!esPrimo(x));
  return x;
}

// Función para obtener el máximo exponente de un número primo en la factorización de x
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

// Función para intercambiar dos números
void intercambiar(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

// Función para solicitar un número al usuario
int solicitarNumero()
{
  int a = 0;
  cout << "Ingrese número: " << endl;
  cin >> a;
  return a;
}

// Función para obtener el máximo de dos números
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
  // Solicitar dos números al usuario
  int a = solicitarNumero(), b = solicitarNumero();

  // Intercambiar los números si b es mayor que a
  if (b > a)
  {
    intercambiar(a, b);
  }

  int mcm = 1, primo = 2;

  // Calcular el MCM utilizando la factorización en primos
  while (primo <= a) // Mientras el primo actual sea menor o igual a 'a'
  {
    int exponenteA = obtenerMaximoExponente(a, primo); // Obtener el máximo exponente del primo en la factorización de 'a'
    int exponenteB = obtenerMaximoExponente(b, primo); // Obtener el máximo exponente del primo en la factorización de 'b'
    mcm = mcm * maximo(exponenteA, exponenteB);        // Multiplicar el MCM por el mayor exponente encontrado
    primo = siguientePrimo(primo);                     // Encontrar el siguiente número primo
  }

  // Imprimir el resultado
  cout << "MCM entre " << a << " y " << b << " es " << mcm << endl;

  return 0;
}