#include <iostream>
using namespace std;

void addK(int array[], int length, int k)
{
  for (int i = 0; i < length; i++)
  {
    if (i % 2 == 0)
    {
      array[i] = k;
    }
  }
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

int main(int argc, char const *argv[])
{
  /* code */
  const int length = 5;
  int array[length] = {2, 95, 4, 9, 3};
  addK(array, length, 12);
  printArray(array, length);
  return 0;
}
