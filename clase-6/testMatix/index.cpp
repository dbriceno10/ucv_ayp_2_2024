#include <iostream>
using namespace std;

void printMatrix(int **M, int n, int m)
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
  const int length = 10;
  int *array = new int[length];
  for (int i = 0; i < length; i++)
  {
    array[i] = rand() % 100;
  }
  const int columns = 10, files = 10;
  int **matrix = new int *[columns];
  // matriz[0] = new int[length];
  // matriz[1] = new int[length];
  // matriz[2] = new int[length];
  // matriz[0][0] = 1;
  // matriz[0][1] = 2;
  // matriz[0][2] = 3;
  // matriz[1][0] = 4;
  // matriz[1][1] = 5;
  // matriz[1][2] = 6;
  // matriz[2][0] = 7;
  // matriz[2][1] = 8;
  // matriz[2][2] = 9;
  // printMatriz(matriz, length, columns);
  for (int j = 0; j < columns; j++)
  {
    matrix[j] = new int[files];
  }
  for (int i = 0; i < files; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      matrix[i][j] = rand() % 100;
    }
  }
  cout << "array" << endl;
  printArray(array, length);
  cout << "matrix" << endl;
  printMatrix(matrix, files, columns);
  return 0;
}
