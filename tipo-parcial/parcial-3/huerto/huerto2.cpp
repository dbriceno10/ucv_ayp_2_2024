#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

class Hortaliza
{
public:
  int tipo; // Ahora es entero
  float volumen;

  Hortaliza() : tipo(0), volumen(0.0) {}
  Hortaliza(int t, float v) : tipo(t), volumen(v) {}
};

void Control(Hortaliza matriz[][3], int N, int M)
{
  const int MAX_TIPOS = 2000;
  int tipoCount[MAX_TIPOS] = {0};
  int comercializables = 0;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      Hortaliza h = matriz[i][j];
      tipoCount[h.tipo]++;
      if (h.volumen >= 10.0)
      {
        comercializables++;
      }
    }
  }

  ofstream file("salidas.txt");
  if (file.is_open())
  {
    file << "Numero de hortalizas de cada tipo:" << endl;
    for (int i = 0; i < MAX_TIPOS; i++)
    {
      if (tipoCount[i] > 0)
        file << "Tipo " << i << ": " << tipoCount[i] << endl;
    }
    file << "Numero de hortalizas que podran ser comercializadas: " << comercializables << endl;
    file.close();
  }
  else
  {
    cout << "No se pudo abrir el archivo salidas.txt" << endl;
  }
}

int main()
{
  const int N = 3; // Número de filas
  const int M = 3; // Número de columnas

  // Crear una matriz de hortalizas
  Hortaliza matriz[N][M];

  // Inicializar la matriz con algunos datos (tipos como enteros)
  matriz[0][0] = Hortaliza(1, 12.5); // Tomate
  matriz[0][1] = Hortaliza(2, 8.0);  // Lechuga
  matriz[0][2] = Hortaliza(3, 15.0); // Zanahoria
  matriz[1][0] = Hortaliza(1, 9.0);
  matriz[1][1] = Hortaliza(2, 11.0);
  matriz[1][2] = Hortaliza(3, 7.5);
  matriz[2][0] = Hortaliza(1, 10.0);
  matriz[2][1] = Hortaliza(2, 13.0);
  matriz[2][2] = Hortaliza(3, 14.0);

  // Llamar a la función Control
  Control(matriz, N, M);

  return 0;
}