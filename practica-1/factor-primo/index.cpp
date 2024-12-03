
#include <iostream>
using namespace std;
int main()
{
  /* code */
  int n = 1711432800, c2 = 0, c3 = 0, c5 = 0, c7 = 0;
  int aux = n;

  //*para 2

  while (aux % 2 == 0 && aux > 0)
  {
    aux = aux / 2;
    c2++;
  }

  while (aux % 3 == 0 && aux > 0)
  {
    aux = aux / 3;
    c3++;
  }

  while (aux % 5 == 0 && aux > 0)
  {
    aux = aux / 5;
    c5++;
  }

  while (aux % 7 == 0 && aux > 0)
  {
    aux = aux / 7;
    c7++;
  }

  cout << "2^" << c2 << " " << "3^" << c3 << " " << "5^" << c5 << " " << "7^" << c7 << endl;

  return 0;
}
