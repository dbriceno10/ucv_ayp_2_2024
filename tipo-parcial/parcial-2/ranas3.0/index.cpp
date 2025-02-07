#include <iostream>
using namespace std;

// Función para calcular el máximo común divisor (MCD) usando el algoritmo de Euclides
int gcd(int a, int b)
{
  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

// Función para calcular el mínimo común múltiplo (MCM)
int lcm(int a, int b)
{
  return (a * b) / gcd(a, b);
}

// Función "Ranas" que retorna la distancia recorrida cuando ambas ranas coincidan por primera vez
int Ranas(int J, int P)
{
  return lcm(J, P);
}

int main(int argc, char const *argv[])
{
  int J = 0, P = 0;
  cout << "¿Cuántos centímetros salta José por salto? " << endl;
  cin >> J;
  cout << "¿Cuántos centímetros salta Pedro por salto? " << endl;
  cin >> P;

  int distancia = Ranas(J, P);
  cout << "José y Pedro coincidirán por primera vez después de recorrer " << distancia << " centímetros." << endl;

  return 0;
}