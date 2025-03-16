#include <iostream>
using namespace std;

void printMatriz(int M[][2], int n, int m)
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

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

void swapF(int M[4][2], int n, int m)
{
  for (int j = 0; j < m; j++)
  {
    for (int i = 0; i < n; i++)
    {
      if (i % 2 == 0)
      {
        swap(M[i][j], M[i + 1][j]);
      }
      // cout << i << " " << j << " - " << M[i][j] << endl;
    }
  }
}

int main(int argc, char const *argv[])
{
  int M[4][2] = {{1, 2}, {4, 2}, {3, 5}, {6, -1}};
  printMatriz(M, 4, 2);
  swapF(M, 4, 2);
  printMatriz(M, 4, 2);
  return 0;
}
