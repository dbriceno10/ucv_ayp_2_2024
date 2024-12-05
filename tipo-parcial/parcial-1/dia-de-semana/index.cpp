#include <iostream>
#include <cmath>
using namespace std;

// int getMonthDays(int day, int month)
// {
//   int aux = 0;
//   switch (month)
//   {
//   case 1:
//   {
//     aux = day;
//     break;
//   }
//   case 2:
//   {
//     aux = day + 31;
//     break;
//   }
//   case 3:
//   {
//     aux = day + 31 + 28;
//     break;
//   }
//   case 4:
//   {
//     aux = day + 31 + 28 + 31;
//     break;
//   }
//   case 5:
//   {
//     aux = day + 31 + 28 + 31 + 30;
//     break;
//   }
//   case 6:
//   {
//     aux = day + 31 + 28 + 31 + 30 + 31;
//     break;
//   }
//   case 7:
//   {
//     aux = day + 31 + 28 + 31 + 30 + 31 + 30;
//     break;
//   }
//   case 8:
//   {
//     aux = day + 31 + 28 + 31 + 30 + 31 + 30 + 31;
//     break;
//   }
//   case 9:
//   {
//     aux = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
//     break;
//   }
//   case 10:
//   {
//     aux = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
//     break;
//   }
//   case 11:
//   {
//     aux = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
//     break;
//   }
//   case 12:
//   {
//     aux = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
//     break;
//   }
//   default:
//     aux = 1;
//     break;
//   }
//   return aux;
// }

int getMonthDays(int month)
{
  int days = 0;
  switch (month)
  {
  case 12:
  {
    days += 30;
  }
  case 11:
  {
    days += 31;
  }
  case 10:
  {
    days += 30;
  }
  case 9:
  {
    days += 31;
  }
  case 8:
  {
    days += 31;
  }
  case 7:
  {
    days += 30;
  }
  case 6:
  {
    days += 31;
  }
  case 5:
  {
    days += 30;
  }
  case 4:
  {
    days += 31;
  }
  case 3:
  {
    days += 28;
  }
  case 2:
  {
    days += 31;
  }
  default:
  {
    // cout << "Entra el default" << endl;
    break;
  }
  }
  return days;
}

void getDay(int day)
{
  switch (day % 7)
  {
  case 0:
  {
    cout << "Es Domingo" << endl;
    break;
  }
  case 1:
  {
    cout << "Es Lunes" << endl;
    break;
  }
  case 2:
  {
    cout << "Es Martes" << endl;
    break;
  }
  case 3:
  {
    cout << "Es Miercoles" << endl;
    break;
  }
  case 4:
  {
    cout << "Es Jueves" << endl;
    break;
  }
  case 5:
  {
    cout << "Es Viernes" << endl;
    break;
  }
  case 6:
  {
    cout << "Es Sabado" << endl;
    break;
  }
  default:
    break;
  }
}

int main(int argc, char const *argv[])
{
  /* code */
  int date1 = 0, date2 = 0;
  cout << "Fecha 1" << endl;
  cin >> date1;
  cout << "Fecha 2" << endl;
  cin >> date2;
  // date1 = 1010001;
  // date2 = 5010001;
  int d1 = 0, m1 = 0, y1 = 0, d2 = 0, m2, y2 = 0, copy1 = date1, copy2 = date2;

  // obtener fecha 1
  d1 = copy1 / 1000000;
  copy1 = copy1 % 1000000;
  m1 = copy1 / 10000;
  copy1 = copy1 % 10000;
  y1 = copy1;

  cout << d1 << '/' << m1 << '/' << y1 << endl;

  // obtener fecha 2
  d2 = copy2 / 1000000;
  copy2 = copy2 % 1000000;
  m2 = copy2 / 10000;
  copy2 = copy2 % 10000;
  y2 = copy2;

  cout << d2 << '/' << m2 << '/' << y2 << endl;
  // cout << getMonthDays(d1, m1) << endl;
  // cout << getMonthDays(d2, m2) << endl;
  // const int days1 = getMonthDays(d1, m1) + (y1 - 1) * 365;
  // const int days2 = getMonthDays(d2, m2) + (y2 - 1) * 365;
  const int days1 = d1 + getMonthDays(m1) + (y1 - 1) * 365;
  const int days2 = d2 + getMonthDays(m2) + (y2 - 1) * 365;

  // cout << days1 << endl;
  // cout << days2 << endl;

  int diaMayor = 0, diaMenor = 0;

  if (days1 > days2)
  {
    diaMayor = days1;
    diaMenor = days2;
  }
  else
  {
    diaMayor = days2;
    diaMenor = days1;
  }

  if ((days1 - days2) % 2 == 0)
  {
    getDay(diaMayor);
  }
  else
  {
    getDay(diaMenor);
  }
  cout << "La diferencia es de " << abs(days1 - days2) << " dias" << endl;
  return 0;
}
