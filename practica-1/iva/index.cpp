#include <iostream>
using namespace std;
int main()
{
  /* code */
  const float IVA = 12;
  float amount1 = 0;
  float amount2 = 0;

  cout << "Introduzca montos validos para calcular su iva de: " << IVA << '%' << endl;

  cout << "Primer Articulo" << endl;

  cin >> amount1;

  cout << "Segundo Articulo" << endl;

  cin >> amount2;

  if (amount1 <= 0 || amount2 <= 0)
  {
    cout << "Debe introducir montos validos" << endl;
    return 0;
  }

  const float subTotal = amount1 + amount2;
  const float amountIVA = subTotal * (IVA / 100);

  cout << "El iva calculado es: " << amountIVA << " y el total a pagar es: " << subTotal + amountIVA << endl;

  return 0;
}
