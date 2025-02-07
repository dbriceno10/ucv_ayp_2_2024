#include <iostream>
using namespace std;

// Función para calcular el mínimo común múltiplo (MCM)
int lcm(int a, int b)
{
  int max = (a > b) ? a : b;

  while (true)
  {
    if (max % a == 0 && max % b == 0)
    {
      return max;
    }
    ++max;
  }
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