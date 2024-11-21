#include <iostream>
using namespace std;

int main()
{
  /* code */
  int n = 0;
  bool feliz = false, creciente = false;
  cout << "Introduzca un numero de 4 digitos" << endl;
  cin >> n;

  if (to_string(n).length() != 4)
  {
    cout << "Debe ser un numero de 4 digitos" << endl;
    return 0;
  }

  const int m1 = n / 100;
  const int m2 = n % 100;

  // cout << m2 << " > " << m1 << endl;

  if (m2 > m1)
  {
    feliz = true;
  }

  int copia = n;
  int n1 = 0, n2 = 0, n3 = 0, n4 = 0;

  //*vamos cortando el numero de atras para adelante
  //*primera vez
  n4 = copia % 10;
  copia = copia / 10;

  //*segunda vez
  n3 = copia % 10;
  copia = copia / 10;

  //*tercera vez
  n2 = copia % 10;
  copia = copia / 10;

  //*cuarta vez
  n1 = copia % 10;
  copia = copia / 10;
  bool condicion = (n1 < n2) && (n2 < n3) && (n3 < n4);
  // cout << n1 << " < " << n2 << " < " << n3 << " < " << n4 << endl;

  if ((n1 < n2) && (n2 < n3) && (n3 < n4))
  {
    creciente = true;
  }

  if (feliz && creciente)
  {
    cout << "Es un numero muy feliz" << endl;
  }
  else if (feliz)
  {
    cout << "Es un numero feliz" << endl;
  }
  else if (creciente)
  {
    cout << "Es un numero creciente" << endl;
  }
  else
  {
    cout << "Es un numero infeliz" << endl;
  }

  return 0;
}
