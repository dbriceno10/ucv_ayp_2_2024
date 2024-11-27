#include <iostream>
using namespace std;

int main()
{
  /* code */
  int hE = 0, mE = 0, hS = 0, mS = 0;
  cout << "Hora de entrada" << endl;
  cin >> hE;
  cout << "introduzca minutos" << endl;
  cin >> mE;
  cout << "Hora de salida" << endl;
  cin >> hS;
  cout << "introduzca minutos" << endl;
  cin >> mS;

  const int tEntrada = hE * 60 + mE;
  const int tSalida = hS * 60 + mS;

  if (tSalida < tEntrada)
  {
    cout << "Datos erroneos" << endl;
    return 0;
  }

  int tTotal = tSalida - tEntrada;

  int totalAPagar = 0;

  if (tTotal > 0)
  {
    totalAPagar = 100;
  }

  if (tTotal > 60)
  {
    tTotal = tTotal - 60;
    int horasExtra = tTotal / 60;
    float pico = (float)tTotal / 60 - horasExtra;
    totalAPagar = totalAPagar + horasExtra * 80;
    if (pico > 0)
    {
      totalAPagar = totalAPagar + 80;
    }
  }

  cout << "El total a pagar es de " << totalAPagar << "Bs" << endl;

  return 0;
}
