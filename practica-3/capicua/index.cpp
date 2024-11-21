#include <iostream>
using namespace std;

int main()
{
  /* code */
  int n = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0;
  cout << "Introduzca un numero de 5 digitos" << endl;
  cin >> n;
  if (to_string(n).length() != 5)
  {
    cout << "Debe ser un numero de 5 digitos" << endl;
    return 0;
  }
  int copia = n, auxiliar = 0, actual = 0;

  //*Vamos a ir cortando el numero de atras hacia adelante y lo guardamos en una viariables, por ejemplo 123 % 10 = 3, 123 / 10 = 12, el ultimo numero obtenido lo guardamos en una variable, la cual se va multiplicando por 10 para guardar el siguiente

  //*primera iteracion

  auxiliar = copia % 10;
  copia = copia / 10;
  actual = actual * 10 + auxiliar;

  //*segunda iteracion

  auxiliar = copia % 10;
  copia = copia / 10;
  actual = actual * 10 + auxiliar;

  //*tercera iteracion

  auxiliar = copia % 10;
  copia = copia / 10;
  actual = actual * 10 + auxiliar;

  //*cuarta iteracion

  auxiliar = copia % 10;
  copia = copia / 10;
  actual = actual * 10 + auxiliar;

  //*quinta iteracion

  auxiliar = copia % 10;
  copia = copia / 10;
  actual = actual * 10 + auxiliar;

  // TODO: dejamos de iterar cuando la copia llegue a ser 0, ya hemos terminado de recorrer el numero, si se usaran ciclos con un n enesimo, esa seria la condicion para dejar de iterar

  if (actual == n)
  {
    cout << "Es capicua" << endl;
  }
  else
  {
    cout << "No es capicua" << endl;
  }

  return 0;
}
