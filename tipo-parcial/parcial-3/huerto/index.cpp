#include <fstream>
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

class Hortaliza
{
public:
  string tipo;
  float volumen;

  Hortaliza() : tipo(""), volumen(0.0) {}
  Hortaliza(string t, float v) : tipo(t), volumen(v) {}
};

void Control(Hortaliza matriz[][3], int N, int M)
{
  const int MAX_TIPOS = 2000;
  string tipos[MAX_TIPOS];
  int tipoCount[MAX_TIPOS] = {0};
  int tipoIndex = 0;
  int comercializables = 0;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      Hortaliza h = matriz[i][j];
      bool found = false;
      for (int k = 0; k < tipoIndex; k++)
      {
        if (tipos[k] == h.tipo)
        {
          tipoCount[k]++;
          found = true;
          break;
        }
      }
      if (!found)
      {
        tipos[tipoIndex] = h.tipo;
        tipoCount[tipoIndex]++;
        tipoIndex++;
      }
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
    for (int i = 0; i < tipoIndex; i++)
    {
      file << tipos[i] << ": " << tipoCount[i] << endl;
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

  // Inicializar la matriz con algunos datos
  matriz[0][0] = Hortaliza("Tomate", 12.5);
  matriz[0][1] = Hortaliza("Lechuga", 8.0);
  matriz[0][2] = Hortaliza("Zanahoria", 15.0);
  matriz[1][0] = Hortaliza("Tomate", 9.0);
  matriz[1][1] = Hortaliza("Lechuga", 11.0);
  matriz[1][2] = Hortaliza("Zanahoria", 7.5);
  matriz[2][0] = Hortaliza("Tomate", 10.0);
  matriz[2][1] = Hortaliza("Lechuga", 13.0);
  matriz[2][2] = Hortaliza("Zanahoria", 14.0);

  // Llamar a la función Control
  Control(matriz, N, M);

  return 0;
}