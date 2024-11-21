#include <iostream>
using namespace std;

int main()
{
  /* code */
  int n = 0;
  const int n2 = 2, n3 = 3, n5 = 5, n7 = 7;
  cout << "Introduzca un numero contenido en el siguiente rango: [1, 99]" << endl;
  cin >> n;
  if (n < 1 || n > 99)
  {
    cout << "El numero debe estar dentro del rango" << endl;
    return 0;
  }
  // cout << n << " % " << n2 << " = " << n % n2 << endl;
  // cout << n << " % " << n3 << " = " << n % n3 << endl;
  // cout << n << " % " << n5 << " = " << n % n5 << endl;
  // cout << n << " % " << n7 << " = " << n % n7 << endl;
  if (n == n2 || n == n3 || n == n5 || n == n7)
  {
    cout << "El numero es primo a" << endl;
  }
  else if (n % n2 != 0 && n % n3 != 0 && n % n5 != 0 && n % n7 != 0)
  {
    cout << "El numero es primo b" << endl;
  }
  else
  {
    cout << "El numero no es primo" << endl;
  }
  return 0;
}
