#include <iostream>
using namespace std;

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
  /* code */
  const int LA = 3;
  const int LB = 4;
  int a[LA] = {1, 4, 9};
  int b[LB] = {2, 5, 10, 12};
  // Salida esperada {1, 2, 4, 5, 9, 10, 12}
  int c[LA * LB] = {};

  return 0;
}
