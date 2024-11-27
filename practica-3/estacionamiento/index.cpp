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

  if(tSalida > tEntrada) {
    cout << "Datos erroneos";
    return 0;
  }

  const int tTotal = tEntrada + tSalida -60;

  if (tTotal - 60 > 0 && tTotal - 60 < 60) {
    cout << "El total a pagar es de 100 bs" << endl;
  } else if (tTotal > 60) {

  }
  {
    /* code */
  }
  



  return 0;
}
