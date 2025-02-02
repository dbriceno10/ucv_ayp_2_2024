#include <iostream>
using namespace std;

void printMatriz(int M[][3], int n, int m)
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

void circleMovement(int array[], int length, int k)
{
  for (int i = 1; i <= k; i++)
  {
    int first = array[0];
    for (int j = 0; j < length; j++)
    {
      if (j == length - 1)
      {
        array[j] = first;
      }
      else
      {
        array[j] = array[j + 1];
      }
    }
  }
}

void mirrorMatriz(int matriz[][3], int n, int m)
{
  for (int i = 0; i < n; i++)
  {
    int array[3] = {};
    for (int j = 0; j < m; j++)
    {
      array[j] = matriz[i][j];
    }
    // printArray(array, 3);
    circleMovement(array, 3, 2);
    // printArray(array, 3);
    for (int j = 0; j < m; j++)
    {
      matriz[i][j] = array[j];
    }
  }
}

int main(int argc, char const *argv[])
{
  int M[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // int ME[3][3] = {{3, 2, 1}, {6, 5, 4}, {9, 8, 7}};
  int ME[3][3] = {};
  printMatriz(M, 3, 3);
  mirrorMatriz(M, 3, 3);
  printMatriz(M, 3, 3);
  return 0;
}