#include <iostream>
using namespace std;

void bubbleSort(int array[], int length)
{
  for (int i = 0; i < length - 1; i++)
  {
    for (int j = 0; j < length - i - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        // Swap the elements
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
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

int main()
{
  const int length = 10;
  int array[length] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 45};

  cout << "Unsorted array: ";
  printArray(array, length);

  bubbleSort(array, length);

  cout << "Sorted array: ";
  printArray(array, length);

  return 0;
}