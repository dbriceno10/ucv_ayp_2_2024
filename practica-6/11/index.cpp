#include <iostream>
using namespace std;

void printMatriz(int M[][3], int n, int m)
{
  for (int i = 0; i < n; i++)
  {
    cout << "|";
    for (int j = 0; j < m; j++)
    {
      cout << " " << M[i][j] << " ";
    }
    cout << "|" << endl;
  }
  cout << endl;
}

int main(int argc, char const *argv[])
{
  int M[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int sum = 0, i = 0;
  for (int j = 2; j >= 0; j--)
  {
    sum += M[i][j];
    i++;
  }
  printMatriz(M, 3, 3);
  cout << "Suma: " << sum << endl;
  return 0;
}
