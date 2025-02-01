#include <iostream>
using namespace std;

void printMatriz(int M[][3], int d)
{
  for (int i = 0; i < d; i++)
  {
    cout << "|";
    for (int j = 0; j < d; j++)
    {
      cout << " " << M[i][j] << " ";
    }
    cout << "|" << endl;
  }
  cout << endl;
}

int main(int argc, char const *argv[])
{
  const int d = 3;
  int M[d][d] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int MT[d][d] = {};
  for (int i = 0; i < d; i++)
  {

    for (int j = 0; j < d; j++)
    {
      MT[j][i] = M[i][j];
    }
  }
  cout << endl;
  cout << "Matriz M" << endl;
  printMatriz(M, d);
  cout << "Matriz MT" << endl;
  printMatriz(MT, d);
  cout << MT << endl;
  return 0;
}
