#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  float base = 0, altura = 0, radio = 0;
  cout << "Introduzca base del triangulo" << endl;
  cin >> base;
  cout << "Introduzca altura del triangulo" << endl;
  cin >> altura;
  cout << "Introduzca radio del circulo" << endl;
  cin >> radio;
  const float areaTriangulo = (base * altura) / 2;
  // const float areaCirculo = M_PI * pow(radio,2);
  const float areaCirculo = M_PI * radio * radio;

  if (areaTriangulo > areaCirculo)
  {
    //*Este es el unico caso que me piden para el ejercicio, realmente no es necesario tomar en cuenta otros
    cout << "El triangulo tiene mayor area al circulo " << areaTriangulo << " > " << areaCirculo << endl;
  }
  else if (areaTriangulo < areaCirculo)
  {
    cout << "El triangulo tiene menor area al circulo " << areaTriangulo << " < " << areaCirculo << endl;
  }
  else
  {
    cout << "El triangulo tiene igual area que el circulo " << areaTriangulo << " = " << areaCirculo << endl;
  }

  return 0;
}
