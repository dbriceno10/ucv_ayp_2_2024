#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  const int f = 3, c = 3;
  int matriz[f][3] = {{1, 9, 3}, {8, 9, 2}, {6, 9, 8}};
  // for (int i = 0; i < f; i++)
  // {
  //   for (int j = 0; j < c; j++)
  //   {
  //     cout << matriz[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  for (int i = 0; i < f; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (i == j)
      {
        cout << matriz[i][j] << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
