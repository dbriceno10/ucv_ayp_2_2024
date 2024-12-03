
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  int J = 0, P = 0, K = 0;
  cout << "Cuantos centimetros salta Jose por salto? " << endl;
  cin >> J;
  cout << "Cuantos centimetros salta Pedro por salto? " << endl;
  cin >> P;
  cout << "Cuantos saltos dio Jose; " << endl;
  cin >> K;
  const int periodo = K * P;
  const int maxJ = J * K;
  const int encuentros = maxJ / periodo;

  if (encuentros >= 1)
  {
    cout << "Jose y Pedro se encuentran " << encuentros << " veces antes de que Jose de " << K << " saltos" << endl;
  }
  else
  {
    cout << "Jose y Pedro no se encuentran" << endl;
  }

  return 0;
}
