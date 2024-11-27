#include <iostream>
using namespace std;
int main()
{
  /* code */
  float n1 = 0, n2 = 0;
  cout << "Introdusca el primer numero" << endl;
  cin >> n1;
  cout << "Introdusca el segundo numero" << endl;
  cin >> n2;

  if (n2 > n1)
  {
    cout << n2 << endl;
  }
  else
  {
    cout << "no hay numero mayor" << endl;
  }

  return 0;
}
