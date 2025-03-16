#include <iostream>
#include <cmath>

using namespace std;

int MCD(int a, int b)
{
  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int MCM(int a, int b)
{
  return abs(a * b) / MCD(a, b);
}

int main(int argc, char const *argv[])
{
  int a, b;
  cout << "Ingrese el primer número: " << endl;
  cin >> a;
  cout << "Ingrese el segundo número: " << endl;
  cin >> b;
  cout << "El MCD de " << a << " y " << b << " es: " << MCD(a, b) << endl;
  cout << "El MCM de " << a << " y " << b << " es: " << MCM(a, b) << endl;
  return 0;
}
