#include <iostream>
using namespace std;

void printMatriz(int **M, int n, int m)
{
  for (int i = 0; i < n; i++)
  {
    cout << "|";
    for (int j = 0; j < m; j++)
    {
      cout << "(" << i << "," << j << "): " << " " << M[i][j] << " ";
      // cout << " " << M[i][j] << " ";
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

void productMatriz(int **MA, int na, int ma, int **MB, int nb, int mb, int **MC)
{
  if (ma != nb)
  {
    cout << "no se pueden operar matrices con dimensiones incopatibles";
  }
  else
  {
    for (int i = 0; i < na; i++)
    {
      for (int j = 0; j < mb; j++)
      {
        MC[i][j] = 0;
        for (int k = 0; k < ma; k++)
        {
          cout << "i: " << i << " j: " << j << " k: " << k << endl;
          const int elA = MA[i][k];
          const int elB = MB[k][j];
          const int elC = elA * elB;
          const int totalC = MC[i][j];
          MC[i][j] += MA[i][k] * MB[k][j];
          cout << "(" << i << "," << j << ")" << ": " << elA << "*" << elB << "=" << elC << endl;
          if (totalC > 0)
          {
            cout << "Total(" << i << "," << j << "): " << totalC << "+" << elC << "=" << MC[i][j] << endl;
          }
          else
          {
            cout << "Total(" << i << "," << j << "): " << MC[i][j] << endl;
          }
        }
      }
    }
  }
}

int main(int argc, char const *argv[])
{
  const int na = 3, ma = 2, nb = 2, mb = 5;
  const int nc = na, mc = mb;
  int **MA = new int *[ma];
  // MA[0] = new int[na];
  // MA[1] = new int[na];
  // MA[2] = new int[na];
  // MA[0][0] = 1;
  // MA[0][1] = 2;
  // MA[1][0] = 3;
  // MA[1][1] = 4;
  // MA[2][0] = 5;
  // MA[2][1] = 6;

  for (int i = 0; i < na; i++)
  {
    MA[i] = new int[na];
    for (int j = 0; j < ma; j++)
    {
      MA[i][j] = random() % 10;
    }
  }

  int **MB = new int *[mb];
  // MB[0] = new int[nb];
  // MB[1] = new int[nb];
  // MB[0][0] = 7;
  // MB[0][1] = 8;
  // MB[0][2] = 9;
  // MB[1][0] = 10;
  // MB[1][1] = 11;
  // MB[1][2] = 12;

  for (int i = 0; i < nb; i++)
  {
    MB[i] = new int[nb];
    for (int j = 0; j < mb; j++)
    {
      MB[i][j] = random() % 10;
    }
  }

  int **MC = new int *[mc];
  MC[0] = new int[nc];
  MC[1] = new int[nc];
  MC[2] = new int[nc];

  cout << "Matriz A" << endl;
  printMatriz(MA, na, ma);
  cout << "Matriz B" << endl;
  printMatriz(MB, nb, mb);
  productMatriz(MA, na, ma, MB, nb, mb, MC);
  cout << "Matriz C" << endl;
  printMatriz(MC, nc, mc);
  delete MA;
  delete MB;
  delete MC;
  return 0;
}