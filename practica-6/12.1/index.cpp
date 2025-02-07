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

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

void swapF(int M[][3], int n, int m)
{
  for (int j = 0; j < m; j++)
  {
    for (int i = 0; i < n; i = i + 2)
    {
      // if (i % 2 == 0)
      {
        swap(M[i][j], M[i + 1][j]);
        // printMatriz(M, n, m);
      }
      // cout << i << " " << j << " - " << M[i][j] << endl;
    }
  }
}

int main(int argc, char const *argv[])
{
  int M[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
  printMatriz(M, 4, 3);
  swapF(M, 4, 3);
  printMatriz(M, 4, 3);
  // for (int i = 0; i < 4; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     cout << M[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  return 0;
}
