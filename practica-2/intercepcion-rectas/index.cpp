#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  /* code */
  float m1 = 0, b1 = 0, m2 = 0, b2 = 0;
  cout << "introduzca m1" << endl;
  cin >> m1;
  cout << "introduzca b1" << endl;
  cin >> b1;
  cout << "introduzca m2" << endl;
  cin >> m2;
  cout << "introduzca b2" << endl;
  cin >> b2;
  // cin >> m1 >> b1 >> m2 >> b2;
  if (m1 == m2)
  {
    cout << "Las rectas son paralelas, no se cruzan" << endl;
    return 0;
  }

  const float Ix = (b2 - b1) / (m1 - m2);
  const float Iy = m1 * Ix + b1;

  cout << "Las rectas se cruzan en el punto (" << Ix << ',' << Iy << ')' << endl;

  return 0;
}
