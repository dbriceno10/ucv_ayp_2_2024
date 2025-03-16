#include <iostream>  // Incluye la biblioteca de entrada y salida estándar
using namespace std; // Utiliza el espacio de nombres estándar

// Función para imprimir un cuadrado con bordes de tamaño impar
void printSquare(int N)
{
  if (N % 2 == 0) // Verifica si N es un número par
  {
    cout << "N debe ser un número impar." << endl; // Imprime un mensaje de error si N es par
    return;                                        // Sale de la función
  }

  int size = N;        // Asigna el valor de N a la variable size
  int half = size / 2; // Calcula la mitad del tamaño

  for (int i = 0; i < size; i++) // Recorre las filas del cuadrado
  {
    for (int j = 0; j < size; j++) // Recorre las columnas del cuadrado
    {
      // Calcula la distancia mínima desde el borde más cercano
      int minDist = min(min(i, j), min(size - i - 1, size - j - 1));
      if (minDist % 2 == 0) // Si la distancia mínima es par
      {
        cout << "X"; // Imprime un asterisco
      }
      else // Si la distancia mínima es impar
      {
        cout << " "; // Imprime un espacio
      }
    }
    cout << endl; // Imprime un salto de línea al final de cada fila
  }
}

int main()
{
  int N;                               // Declara una variable para almacenar el tamaño del cuadrado
  cout << "Ingrese un número impar: "; // Solicita al usuario que ingrese un número impar
  cin >> N;                            // Lee el número ingresado por el usuario

  printSquare(N); // Llama a la función printSquare para imprimir el cuadrado

  return 0; // Finaliza el programa
}