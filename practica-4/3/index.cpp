#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

  // Declaración de la variable para almacenar el número de términos
  int n;
  // Solicita al usuario ingresar el número de términos
  cout << "Ingrese el número de términos: ";
  // Lee el número de términos ingresado por el usuario
  cin >> n;

  // Inicializa la variable para almacenar el valor aproximado de π
  double pi = 0.0;
  // Bucle para calcular el valor aproximado de π usando la serie de Leibniz
  for (int i = 0; i < n; ++i)
  {
    // Si el índice es par, suma el término correspondiente
    if (i % 2 == 0)
    {
      pi += 4.0 / (2 * i + 1);
    }
    // Si el índice es impar, resta el término correspondiente
    else
    {
      pi -= 4.0 / (2 * i + 1);
    }
  }

  // Muestra el valor aproximado de π calculado
  cout << "El valor aproximado de π es: " << pi << endl;
}
