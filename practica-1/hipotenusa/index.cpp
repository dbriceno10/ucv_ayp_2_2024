#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  /* code */
  float c1 = 0, c2 = 0;
  cout << "Introduzca cateto 1" << endl;
  cin >> c1;
  cout << "Introduzca cateto 2" << endl;
  cin >> c2;
  const float h = sqrt(c1 * c1 + c2 * c2);
  cout << "La hipotenusa es " << h << endl;
  return 0;
}
