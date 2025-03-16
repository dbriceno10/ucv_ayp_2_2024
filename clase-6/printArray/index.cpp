#include <iostream>
using namespace std;

void printMatriz(int **M, int n, int m)
{
  for (int i = 0; i < n; i++)
  {
    cout << "|";
    for (int j = 0; j < m; j++)
    {
      // cout << "(" << i << "," << j << "): " << " " << M[i][j] << " ";
      cout << " " << M[i][j] << " ";
    }
    cout << "|" << endl;
  }
  cout << endl;
}

void printArray(int array[], int length)
{
  cout << "[";
  for (int i = 0; i < length; i++)
  {
    if (i == length - 1)
    {
      cout << array[i] << "]" << endl;
    }
    else
    {
      cout << array[i] << ", ";
    }
  }
}

int main(int argc, char const *argv[])
{
  const int length = 3;
  int *array = new int[length];
  array[0] = 1;
  array[1] = 2;
  array[2] = 3;
  const int columns = 3;
  int **matriz = new int *[columns];
  matriz[0] = new int[length];
  matriz[1] = new int[length];
  matriz[2] = new int[length];
  matriz[0][0] = 1;
  matriz[0][1] = 2;
  matriz[0][2] = 3;
  matriz[1][0] = 4;
  matriz[1][1] = 5;
  matriz[1][2] = 6;
  matriz[2][0] = 7;
  matriz[2][1] = 8;
  matriz[2][2] = 9;
  printMatriz(matriz, length, columns);
  printArray(array, length);
  return 0;
}
