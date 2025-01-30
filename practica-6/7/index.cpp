#include <iostream>
using namespace std;

void maxFrecuency(int array[], int length, int &maxF, int &maxC)
{
  for (int i = 0; i < length; i++)
  {
    int tempC = 0;
    for (int j = 0; j < length; j++)
    {
      if (array[i] == array[j])
      {
        tempC++;
      }
    }
    if (maxC < tempC)
    {
      maxC = tempC;
      maxF = array[i];
    }
  }
}

int main(int argc, char const *argv[])
{
  /* code */
  const int length = 20;
  int maxF = 0, maxC = 0;
  int array[length] = {4, 6, 1, 2, 1, 23, 2, 1, 19, 1, 33, 2, 2, 1, 2, 85, 1, 99, 100, 0};
  maxFrecuency(array, length, maxF, maxC);
  cout << maxF << ":" << maxC << endl;
  return 0;
}
