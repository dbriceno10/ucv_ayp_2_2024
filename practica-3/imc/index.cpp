#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  float peso = 0, altura = 0;
  // cin >> peso >> altura;
  cout << "Introduzca peso (libras) " << endl;
  cin >> peso;
  cout << "Introduzca altura (centimetros) " << endl;
  cin >> altura;

  if (peso <= 0 || altura <= 0)
  {
    cout << "Datos erroneos" << endl;
    return 0;
  }

  const float pesoKg = peso * 0.453592;
  const float alturaM = altura / 100;
  const float imc = pesoKg / (alturaM * alturaM);

  if (imc < 16)
  {
    cout << "Criterio de ingreso" << endl;
  }
  else if (imc >= 16 && imc < 17)
  {
    cout << "Infrapeso" << endl;
  }
  else if (imc >= 17 && imc < 18.5)
  {
    cout << "Bajo peso" << endl;
  }
  else if (imc >= 18 && imc < 25)
  {
    cout << "Peso normal" << endl;
  }
  else if (imc >= 25 && imc < 30)
  {
    cout << "Sobrepeso" << endl;
  }
  else if (imc >= 30 && imc < 35)
  {
    cout << "Obesidad premorbida" << endl;
  }
  else if (imc >= 40 && imc < 45)
  {
    cout << "Obesidad morbida" << endl;
  }
  else if (imc >= 45)
  {
    cout << "Obecidad hipermorbida" << endl;
  }

  return 0;
}
