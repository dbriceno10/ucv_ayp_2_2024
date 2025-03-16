#include <iostream>
using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int x)
{
  if (x <= 1)
  {
    return false;
  }
  for (int i = 2; i * i <= x; i++)
  {
    if (x % i == 0)
    {
      return false;
    }
  }
  return true;
}

// Función "MaxPrim" que retorna el índice de la columna donde se encuentra el primo más grande de toda la matriz
int MaxPrim(int** matriz, int filas, int columnas)
{
  int maxPrimo = -1;
  int columnaMaxPrimo = -1;

  for (int j = 0; j < columnas; j++)
  {
    for (int i = 0; i < filas; i++)
    {
      if (esPrimo(matriz[i][j]) && matriz[i][j] > maxPrimo)
      {
        maxPrimo = matriz[i][j];
        columnaMaxPrimo = j;
      }
    }
  }

  return columnaMaxPrimo;
}

int main()
{
  int filas = 3;
  int columnas = 4;

  // Crear una matriz dinámica
  int** matriz = new int*[filas];
  for (int i = 0; i < filas; i++)
  {
    matriz[i] = new int[columnas];
  }

  // Inicializar la matriz con algunos valores
  matriz[0][0] = 2; matriz[0][1] = 3; matriz[0][2] = 5; matriz[0][3] = 7;
  matriz[1][0] = 11; matriz[1][1] = 13; matriz[1][2] = 17; matriz[1][3] = 19;
  matriz[2][0] = 23; matriz[2][1] = 29; matriz[2][2] = 31; matriz[2][3] = 37;

  // Llamar a la función MaxPrim
  int columna = MaxPrim(matriz, filas, columnas);
  cout << "El primo más grande se encuentra en la columna: " << columna << endl;

  // Liberar la memoria de la matriz
  for (int i = 0; i < filas; i++)
  {
    delete[] matriz[i];
  }
  delete[] matriz;

  return 0;
}