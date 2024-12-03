#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  float v1 = 0, v2 = 0, x = 0;
  // cin >> v1 >> v2 >> x;
  cout << "Valor 1" << endl;
  cin >> v1;
  cout << "Valor 2" << endl;
  cin >> v2;
  cout << "Valor de X" << endl;
  cin >> x;

  if (x >= v1 && x <= v2)
  {
    cout << "x=" << x << " pertenece al intervalo [" << v1 << "," << v2 << "]" << endl;
  }
  else
  {
    cout << "x=" << x << " no pertenece al intervalo [" << v1 << "," << v2 << "]" << endl;
  }

  return 0;
}
