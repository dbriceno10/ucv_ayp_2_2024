#include <iostream>
#include <string>

using namespace std;

class Fraccion
{
  int Numerador, Denominador;

public:
  // Fraccion() {}
  Fraccion(int N1, int N2)
  {
    Numerador = N1;
    Denominador = N2;
  }

  int getNumerador()
  {
    return Numerador;
  }

  int getDenominador()
  {
    return Denominador;
  }

  // F1.Numerador*F2.Denominador+F2.Numerador*F1.Denominador
  //-------------------------------------------------------
  //          F1.Denominador*F2.Denominador

  Fraccion Sumar(Fraccion F)
  {

    int N = Numerador * F.getDenominador() + F.getNumerador() * Denominador;
    int D = Denominador * F.getDenominador();
    Fraccion Fnueva(N, D);

    return Fnueva;
  }

  string aString()
  {
    // string n = stoi(Numerador);
    string n = to_string(Numerador);
    string d = to_string(Denominador);

    return n + "/" + d;
  }

  void Simplificar()
  {
    int mcd = MCD(Numerador, Denominador);
    Numerador = Numerador / mcd;
    Denominador = Denominador / mcd;
  }

private:
  int MCD(int a, int b)
  {

    return 0;
  }
};

int main(int argc, char const *argv[])
{
  Fraccion F1(1, 2), F2(1, 2);

  Fraccion Fres = F1.Sumar(F2);
  Fres.Simplificar();

  cout << Fres.aString();

  return 0;
}
