#include <iostream>
using namespace std;

int readInt()
{
  int n = 0;
  cin >> n;
  return n;
}

bool isEven(int n)
{
  if (n % 2 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

float percentage(int n, int total)
{
  if (total > 0)
  {
    float a = n, b = total;
    return (a / b) * 100;
  }
  else
  {
    return 0;
  }
}

int main(int argc, char const *argv[])
{
  bool b = true;
  int cNumbers = 0, acumNumbers = 0, cEven = 0, acumEvent = 0;
  while (b)
  {
    int n = readInt();
    if (n <= 0)
    {
      b = false;
      break;
    }
    if (isEven(n))
    {
      cEven++;
      acumEvent += n;
    }
    cNumbers++;
    acumNumbers += n;
  }
  cout << "Se introdujeron " << cNumbers << " numeros y su suma fue " << acumNumbers << endl;
  cout << "Se introdujeron " << cEven << " numeros pares y su suma fue " << acumEvent << " y su porcentaje fue de " << percentage(cEven, cNumbers) << "%" << endl;

  return 0;
}
