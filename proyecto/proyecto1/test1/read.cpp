#include <iostream>
#include <cmath>
using namespace std;

int leerMuro()
{
  int aux = 0, muro = -1;
  cin >> aux;
  muro = aux;
  cin >> aux;
  muro = muro * 10 + aux;
  return muro;
}

int main(int argc, char const *argv[])
{
  int vida = 0;
  cin >> vida;
  int dimensions = 0;
  int aux = 0;
  cin >> aux;
  dimensions = aux;
  cin >> aux;
  dimensions = dimensions * 10 + aux;
  cout << vida << endl;
  cout << dimensions << endl;
  int objetos = 0;
  cin >> objetos;
  cout << objetos << endl;
  char variable;
  int wall1 = -1, wall2 = -1, wall3 = -1;
  int cMuro = 0;
  int c = 0;
  while (cin >> variable)
  {
    cout << variable << endl;
    // if (variable == '#')
    // {
    //   if (cMuro == 0)
    //   {
    //     wall1 = leerMuro();
    //     cout << "Muro 1 #" << wall1 << endl;
    //     cMuro++;
    //   }
    //   else if (cMuro == 1)
    //   {
    //     wall2 = leerMuro();
    //     cout << "Muro 2 #" << wall2 << endl;
    //     cMuro++;
    //   }
    //   else
    //   {
    //     wall3 = leerMuro();
    //     cout << "Muro 3 #" << wall3 << endl;
    //     cMuro++;
    //   }
    // }
    c++;
  }
  cout << "Nro de iteraciones " << c << endl;
  return 0;
}
