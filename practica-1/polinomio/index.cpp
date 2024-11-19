#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  /* code */
  //! NOTA: Estamos usando la libreria cmath debido a que si trabajaramos con el operador ^ en c++ estariamos limitados a que la base tiene que ser un entero
  float a = 0, b = 0, c = 0, x1 = 0, x2 = 0;
  cout << "Introduzca el coeficiente para a aX^2" << endl;
  cin >> a;
  cout << "Introduzca el coeficiente para a bX" << endl;
  cin >> b;
  cout << "Introduzca el coeficiente para el termino independiente c" << endl;
  cin >> c;
  // cout << "Su polinomio es " << a << "X^2" << b << "X" << c << "=0" << endl;
  const float det = pow(b, 2) - (4 * a * c);
  if (det < 0)
  {
    cout << "El polinomio no tiene raices reales" << endl;
    return 0;
  }
  if (det == 0)
  {
    x1 = -b / 2 * a;
    cout << "El polinomnio tiene solo una raiz real x=" << x1 << endl;
  }
  else
  {
    const float raiz = sqrt(det);
    x1 = (-b + raiz) / 2 * a;
    x2 = (-b - raiz) / 2 * a;
    cout << "Las raices del polinomio son x1=" << x1 << " y x2=" << x2 << endl;
  }
  return 0;
}
