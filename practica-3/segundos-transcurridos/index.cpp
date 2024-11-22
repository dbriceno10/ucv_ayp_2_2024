#include <iostream>
using namespace std;

int main()
{
  /* code */
  int hora = 0, minutos = 0, segundos = 0, horas_completas = 0;
  int tiempo = 0;
  bool tiempoBool = false;
  cout << "Introduzca la hora en formato de 12 horas" << endl;
  cin >> hora;
  cout << "Introduzca los minutos" << endl;
  cin >> minutos;
  cout << "Introduzca los segundos" << endl;
  cin >> segundos;
  cout << "Introduzca tiempo del dia AM: 0, PM: 1" << endl;
  cin >> tiempo;
  if (hora < 1 || hora > 12 || minutos < 0 || minutos > 59 || segundos < 0 || segundos > 59)
  {
    cout << "Fotmato de tiempo erroneo" << endl;
    return 0;
  }
  if (tiempo == 0)
  {
    tiempoBool = false;
  }
  else
  {
    tiempoBool = true;
  }
  if (tiempoBool)
  {
    horas_completas = hora + 12;
  }
  else
  {
    horas_completas = hora;
  }
  cout << "Los segundos transcurridos durante el dia fueron: " << (horas_completas * 60 * 60) + (minutos * 60) + segundos << endl;
  return 0;
}
