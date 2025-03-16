#include <iostream>
using namespace std;

int sumArr(int *array, int length)
{
  int sum = 0;
  for (int i = 0; i < length; i++)
  {
    sum += array[i];
  }
  return sum;
}

int main(int argc, char const *argv[])
{
  const int lenth = 3;
  int *array = new int[lenth];
  array[0] = 1;
  array[1] = 2;
  array[2] = 3;
  cout << "Los bombillos se encenderan en " << sumArr(array, lenth) << " segundos" << endl;
  return 0;
}
