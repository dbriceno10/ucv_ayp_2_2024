#include <iostream>
using namespace std;

bool sumK(int array[], int length, int k)
{
  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      if (array[i] + array[j] == k)
      {
        return true;
      }
    }
  }
  return false;
}

int main(int argc, char const *argv[])
{
  /* code */
  const int length = 6;
  int array[length] = {4, -1, 6, 8, 10, 3};
  if (sumK(array, length, 2))
  {
    cout << "Verdadero" << endl;
  }
  else
  {
    cout << "Falso" << endl;
  }
  return 0;
}
