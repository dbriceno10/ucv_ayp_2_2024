#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int J = 0, P = 0, K = 0;
  cout << "¿Cuántos centímetros salta José por salto? " << endl;
  cin >> J;
  cout << "¿Cuántos centímetros salta Pedro por salto? " << endl;
  cin >> P;
  cout << "¿Cuántos saltos dio José? " << endl;
  cin >> K;

  int encuentros = 0;

  // Recorre cada salto de José hasta K
  for (int i = 1; i <= K; i++)
  {
    int posicionJose = J * i; // Calcula la posición de José después de i saltos
    for (int j = 1; j <= i; j++)
    {
      int posicionPedro = P * j; // Calcula la posición de Pedro después de j saltos
      if (posicionJose == posicionPedro)
      {
        encuentros++; // Incrementa el contador de encuentros
        break;        // Sale del bucle interno si se encuentra una coincidencia
      }
    }
  }

  if (encuentros > 0)
  {
    cout << "José y Pedro se encuentran " << encuentros << " veces antes de que José dé " << K << " saltos." << endl;
  }
  else
  {
    cout << "José y Pedro no se encuentran antes de que José dé " << K << " saltos." << endl;
  }

  return 0;
}