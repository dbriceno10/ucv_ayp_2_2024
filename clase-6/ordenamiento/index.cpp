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


void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int minArr(int array[], int length, int init)
{
  int minPos = init;
  for (int i = init + 1; i < length; i++)
  {
    if (array[i] < array[minPos])
    {
      minPos = i;
    }
  }
  return minPos;
}

void sortArr(int array[], int length)
{
  for (int i = 0; i < length; i++)
  {
    int min = minArr(array, length, i);
    swap(array[min], array[i]);
  }
}


int main(int argc, char const *argv[])
{
  int array[10] = {};
  // srand(time(0));
  for (int i = 0; i < 10; i++)
  {
    array[i] = rand() % 100; // Genera números aleatorios entre 0 y 99
  }
  cout << "array desordenado" << endl;
  printArray(array, 10);
  sortArr(array, 10);
  cout << "array ordenado" << endl;
  printArray(array, 10);
  return 0;
}
