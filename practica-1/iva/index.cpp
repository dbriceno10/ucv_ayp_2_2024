#include <iostream>
using namespace std;
int main()
{
  /* code */
  const float IVA = 12;
  float amount = 0;

  cout << "Introduzca un monto valido para calcular su iva de: " << IVA << '%' << endl;

  cin >> amount;

  if (amount <= 0)
  {
    cout << "Debe introducir un monto valido" << endl;
    return 0;
  }

  cout << "El iva calculado es: " << amount * (IVA / 100) << endl;

  return 0;
}
