#include <iostream>
using namespace std;

// int message(int dias)
// {
//   cout << "Han transcurrido " << dias << " dias" << endl;
//   return 0;
// }

int main()
{
  /* code */
  int dia = 0, mes = 0, dias_transcurridos = 1;
  cout << "Introduzca dia" << endl;
  cin >> dia;
  cout << "Introduzca mes" << endl;
  cin >> mes;

  switch (mes)
  {
  case 1:
  {
    cout << "Han transcurrido " << dia - 1 << " dias" << endl;
    break;
  }
  case 2:
  {
    cout << "Han transcurrido " << dia - 1 + 31 << " dias" << endl;
    break;
  }
  case 3:
  {
    cout << "Han transcurrido " << dia - 1 + 31 + 28 << " dias" << endl;
    break;
  }
  case 4:
  {
    cout << "Han transcurrido " << dia - 1 + 31 + 28 + 31 << " dias" << endl;
    break;
  }
  case 5:
  {
    cout << "Han transcurrido " << dia - 1 + 31 + 28 + 31 + 30 << " dias" << endl;
    break;
  }
  case 6:
  {
    cout << "Han transcurrido " << dia - 1 + 31 + 28 + 31 + 30 + 31 << " dias" << endl;
    break;
  }
  case 7:
  {
    cout << "Han transcurrido " << dia - 1 + 31 + 28 + 31 + 30 + 31 + 29 << " dias" << endl;
    break;
  }
  case 8:
  {
    cout << "Han transcurrido " << dia - 1 + 31 + 28 + 31 + 30 + 31 + 29 + 31 << " dias" << endl;
    break;
  }
  case 9:
  {
    cout << "Han transcurrido " << dia - 1 + 31 + 28 + 31 + 30 + 31 + 29 + 31 + 31 << " dias" << endl;
    break;
  }
  case 10:
  {
    cout << "Han transcurrido " << dia - 1 + 31 + 28 + 31 + 30 + 31 + 29 + 31 + 30 << " dias" << endl;
    break;
  }
  case 11:
  {
    cout << "Han transcurrido " << dia - 1 + 31 + 28 + 31 + 30 + 31 + 29 + 31 + 30 + 31 << " dias" << endl;
    break;
  }
  case 12:
  {
    cout << "Han transcurrido " << dia - 1 + 31 + 28 + 31 + 30 + 31 + 29 + 31 + 30 + 31 + 30 << " dias" << endl;
    break;
  }
  default:
    cout << "Ha introducido datos erroneos" << endl;
    break;
  }

  return 0;
}
