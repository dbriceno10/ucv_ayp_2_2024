#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  string palabra = "", capicua = "";
  cout << "Ingrese una palabra" << endl;
  cin >> palabra;
  for (int i = palabra.length() - 1; i >= 0; i--)
  {
    capicua += palabra[i];
  }

  cout << palabra << " ----> " << capicua << endl;

  if (palabra == capicua)
  {
    cout << "La palabra es capicua" << endl;
  }
  else
  {
    cout << "La palabra no es capicua" << endl;
  }

  return 0;
}
