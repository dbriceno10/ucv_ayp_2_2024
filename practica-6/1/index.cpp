#include <iostream>
using namespace std;

int min(int arr[], int length)
{
  int min = arr[0];
  for (int i = 1; i < length; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  return min;
}

int max(int arr[], int length)
{
  int max = arr[0];
  for (int i = 1; i < length; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

int main(int argc, char const *argv[])
{
  /* code */
  const int l = 10;
  int arr[l] = {5, 3, 9, 1, 6, 8, 2, 7, 4, 0};
  cout << "El minimo valor del arreglo es: " << min(arr, l) << endl;
  cout << "El maximo valor del arreglo es: " << max(arr, l) << endl;
  return 0;
}
