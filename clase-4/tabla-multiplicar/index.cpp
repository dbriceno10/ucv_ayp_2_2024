#include <iostream>
using namespace std;
int main()
{
  /* code */
  int n = 0, min = 0, max = 0;

  cout << "Introduzca la tabla que desea multiplicar " << endl;
  cin >> n;

  for (int i = 1; i <= 10; i++)
  {
    cout << n << " * " << i << " = " << n * i << endl;
  }

  return 0;
}
