#include <iostream>
using namespace std;

void printTopOrBottom(int n)
{
  for (int j = 0; j < n; j++)
  {
    cout << "X";
  }
  cout << endl;
}

void printWalls(int n)
{
  for (int j = 0; j < n; j++)
  {
    if (j == 0 || j == n - 1)
    {
      cout << "X";
    }
    else
    {
      cout << " ";
    }
  }
  cout << endl;
}

int main(int argc, char const *argv[])
{
  /* code */
  int n = 0;
  cout << "Introduzca un numero" << endl;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    if (i == 0 || i == n - 1)
    {
      printTopOrBottom(n);
    }
    else
    {
      printWalls(n);
    }
  }
  return 0;
}
