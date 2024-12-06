#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
  char a = '0', b = '0', c = '0', d = '0', e = '0', f = '0';
  cout << "Introduzca el primer caracter" << endl;
  cin >> a;
  cout << "Introduzca el segundo caracter" << endl;
  cin >> b;
  cout << "Introduzca el tercer caracter" << endl;
  cin >> c;
  cout << "Introduzca el cuarto caracter" << endl;
  cin >> d;
  cout << "Introduzca el quinto caracter" << endl;
  cin >> e;
  cout << "Introduzca el sexto caracter" << endl;
  cin >> d;
  int na = a, nb = b, nc = c, nd = d, ne = e, nf = f, contador = 0;
  int menor = na;
  // cout << na << '-' << nb << '-' << nc << '-' << nd << '-' << ne << '-' << nf << endl;
  if (menor < nb)
  {
    menor = nb;
  }
  if (menor < nc)
  {
    menor = nc;
  }
  if (menor < nc)
  {
    menor = nc;
  }
  if (menor < nd)
  {
    menor = nd;
  }
  if (menor < ne)
  {
    menor = ne;
  }
  if (menor < nf)
  {
    menor = nf;
  }
  if (abs(na - menor) > 0)
  {
    if (abs(na - menor) % 2 == 0)
    {
      contador++;
    }
  }
  if (abs(nb - menor) > 0)
  {
    if (abs(nb - menor) % 2 == 0)
    {
      contador++;
    }
  }
  if (abs(nc - menor) > 0)
  {
    if (abs(nc - menor) % 2 == 0)
    {
      contador++;
    }
  }
  if (abs(nd - menor) > 0)
  {
    if (abs(nd - menor) % 2 == 0)
    {
      contador++;
    }
  }
  if (abs(ne - menor) > 0)
  {
    if (abs(ne - menor) % 2 == 0)
    {
      contador++;
    }
  }
  if (abs(nf - menor) > 0)
  {
    if (abs(nf - menor) % 2 == 0)
    {
      contador++;
    }
  }
  cout << "Caracteres con distancias pares respecto al menor " << contador << endl;
  return 0;
}
