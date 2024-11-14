#include <iostream>
using namespace std;
int main()
{
  /* code */
  int HU = 0;
  int MU = 0;
  const float RHM = 0.5;
  const float RMM = 6;
  cout << "Introduzca la hora: [1-12]" << endl;
  cin >> HU;
    if (HU > 12 || HU < 1)
  {
    cout << "Formato de hora incorrecto" << endl;
    return 0;
  }
  cout << "Introduzca los minutos: [0-59]" << endl;
  cin >> MU;
  if (MU > 59 || MU < 0)
  {
    cout << "Formato de minutos incorrecto" << endl;
    return 0;
  }
  const float RH = MU * RHM;
  const float RM = MU * RMM;
  int AB = HU * 30;
  if(AB == 360) {
    AB = 0;
  }
  float angle = RM - AB - RH;
  // cout << "RH: " << RH << endl;
  // cout << "RM: " << RM << endl;
  // cout << "AB: " << AB << endl;
  // cout << "angle: " << angle << endl;
  if (angle < 0)
  {
    angle = -angle;
  }
  cout << "El angulo entre las agujas es de " << angle << " grados." << endl;
  return 0;
}
