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

void circleMovement(int array[], int length, int k)
{
  for (int i = 1; i <= k; i++)
  {
    int first = array[0];
    for (int j = 0; j < length; j++)
    {
      if (j == length - 1)
      {
        array[j] = first;
      }
      else
      {
        array[j] = array[j + 1];
      }
    }
  }
}

int main(int argc, char const *argv[])
{
  /* code */
  const int length = 4;
  int array[length] = {4, 6, -1, 2};
  circleMovement(array, length, 2);
  printArray(array, length);
  return 0;
}
