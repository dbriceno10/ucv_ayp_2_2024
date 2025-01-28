#include <iostream>
using namespace std;

float promElements(int arr[], int length, int &elements)
{
  float sum = 0;
  for (int i = 0; i < length; i++)
  {
    if (arr[i] > length)
    {
      elements++;
      sum += arr[i];
    }
  }
  if (elements > 0)
  {
    return sum / elements;
  }
  else
  {
    return 0;
  }
}

int main(int argc, char const *argv[])
{
  /* code */
  const int l = 10;
  int elements = 0;
  int arr[l] = {5, 30, 9, 1, 50, 80, 20, 7, 4, 15};
  float prom = promElements(arr, l, elements);
  cout << "El número de elementos mayores a l: " << l << " es " << elements << " y su promedio es: " << prom << endl;
  return 0;
}