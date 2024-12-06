#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  //*zona de declaracion de variables
  int f1 = 0, f2 = 0, f3 = 0, m1 = 0, a1 = 0, m2 = 0, a2 = 0, m3 = 0, a3 = 0, fMayor = 0, fMenor = 0, meses1 = 0, meses2 = 0, meses3 = 0;

  // Leer fechas
  cout << "Fecha 1" << endl;
  cin >> f1;
  cout << "Fecha 2" << endl;
  cin >> f2;
  cout << "Fecha 3" << endl;
  cin >> f3;
  // f1 = 200201;
  // f2 = 200101;
  // f3 = 200401;

  // Obtener fecha 1
  a1 = f1 / 100;
  m1 = f1 % 100;

  // Obtener fecha 2
  a2 = f2 / 100;
  m2 = f2 % 100;

  // Obtener fecha 3
  a3 = f3 / 100;
  m3 = f3 % 100;

  cout << "fecha 1 " << a1 << '/' << m1 << endl;
  cout << "fecha 2 " << a2 << '/' << m2 << endl;
  cout << "fecha 3 " << a3 << '/' << m3 << endl;

  // pasar fechas a meses
  meses1 = m1 + (a1 - 2000) * 12;
  meses2 = m2 + (a2 - 2000) * 12;
  meses3 = m3 + (a3 - 2000) * 12;

  // cout << "meses1 " << meses1 << endl;
  // cout << "meses2 " << meses2 << endl;
  // cout << "meses3 " << meses3 << endl;

  // bucar mayor y menos

  if (meses1 > meses2)
  {
    fMayor = meses1;
  }
  else
  {
    fMayor = meses2;
  }

  if (meses3 > fMayor)
  {
    if (fMayor > meses1)
    {
      fMenor = meses1;
    }
    else
    {
      fMenor = meses2;
    }
    fMayor = meses3;
  }
  else
  {
    if (fMenor > meses1)
    {
      fMenor = meses1;
    }
    else
    {
      fMenor = meses3;
    }
  }

  cout << fMayor - fMenor << endl;

  return 0;
}
