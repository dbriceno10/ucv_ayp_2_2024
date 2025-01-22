#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  int n = 0, contador = 0;
  cin >> n;
  int copia = n;
  while (copia > 0)
  {
    copia = copia / 10;
    contador++;
  }
  cout << "El numero " << n << " tiene " << contador << " digitos" << endl;
  return 0;
}
