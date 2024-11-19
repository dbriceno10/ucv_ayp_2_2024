#include <iostream>
using namespace std;
int main()
{
  /* code */
  float base = 0;
  float altura = 0;
  cout << "Ingrese base del triangulo" << endl;
  cin >> base;
  cout << "Ingrese la altura del triangulo" << endl;
  cin >> altura;
  if (base <= 0 || altura <= 0)
  {
    cout << "La base y la altura deben ser mayores a 0" << endl;
    return 0;
  }

  cout << "El areal del triangulo es: " << (base * altura) / 2 << endl;

  return 0;
}
