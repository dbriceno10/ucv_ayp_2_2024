#include <iostream>
#include <string>

using namespace std;

class Fraccion
{
  int Numerador, Denominador;

public:
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

  Fraccion Sumar(Fraccion F)
  {
    int N = Numerador * F.getDenominador() + F.getNumerador() * Denominador;
    int D = Denominador * F.getDenominador();
    Fraccion Fnueva(N, D);
    Fnueva.Simplificar();
    return Fnueva;
  }

  Fraccion operator+(const Fraccion &F) const
  {
    int N = Numerador * F.Denominador + F.Numerador * Denominador;
    int D = Denominador * F.Denominador;
    Fraccion Fnueva(N, D);
    Fnueva.Simplificar();
    return Fnueva;
  }

  string aString()
  {
    // string n = stoi(Numerador);
    Simplificar();
    string n = to_string(Numerador);
    string d = to_string(Denominador);
    if (Denominador == 1)
    {
      return n;
    }
    else
    {
      return n + "/" + d;
    }
  }

  void Simplificar()
  {
    int mcd = MCD(Numerador, Denominador);
    Numerador = Numerador / mcd;
    Denominador = Denominador / mcd;
  }

  bool Comparar(Fraccion F)
  {
    F.Simplificar();
    Simplificar();
    return Numerador == F.getNumerador() && Denominador == F.getDenominador();
  }

  Fraccion Dividir(Fraccion F)
  {
    int N = Numerador * F.getDenominador();
    int D = Denominador * F.getNumerador();
    Fraccion Fnueva(N, D);
    Fnueva.Simplificar();
    return Fnueva;
  }

  Fraccion Multiplicar(Fraccion F)
  {
    int N = Numerador * F.getNumerador();
    int D = Denominador * F.getDenominador();
    Fraccion Fnueva(N, D);
    Fnueva.Simplificar();
    return Fnueva;
  }

private:
  // Calculando el MCD usando el algoritmo de euclides
  int MCD(int a, int b)
  {
    while (b != 0)
    {
      int temp = b;
      b = a % b;
      a = temp;
    }
    return a;
  }

  int MCM(int a, int b)
  {
    return abs(a * b) / MCD(a, b);
  }
};

int SolicitarNumero(string message)
{
  int n = 0;
  cout << message;
  do
  {
    cin >> n;
    if (n < 1)
    {
      cout << "El numero debe ser mayor a 0" << endl;
    }
  } while (n < 1);
  return n;
}

int main()
{
  int N1, N2, N3, D1, D2, D3;
  N1 = SolicitarNumero("Ingrese el numerador de la fraccion 1: ");
  D1 = SolicitarNumero("Ingrese el denominador de la fraccion 1: ");
  N2 = SolicitarNumero("Ingrese el numerador de la fraccion 2: ");
  D2 = SolicitarNumero("Ingrese el denominador de la fraccion 2: ");
  D3 = SolicitarNumero("Ingrese el denominador de la fraccion 3: ");
  N3 = SolicitarNumero("Ingrese el numerador de la fraccion 3: ");

  Fraccion F1(N1, D1), F2(N2, D2), F3(N3, D3);

  Fraccion Suma = F1.Sumar(F2.Sumar(F3));

  cout << "La suma de las 3 fracciones es: " << Suma.aString() << endl;

  Fraccion Multiplicacion = F1.Multiplicar(F3);

  cout << "La multiplicacion de la fraccion 1 y 3 es: " << Multiplicacion.aString() << endl;

  Fraccion Division = F2.Dividir(F1);

  cout << "La division de la fraccion 2 y 1 es: " << Division.aString() << endl;

  if (F1.Comparar(F2))
  {
    cout << "Las fracciones 1 y 2 son iguales" << endl;
  }
  else
  {
    cout << "Las fracciones 1 y 2 no son iguales" << endl;
  }

  if (F1.Comparar(F3))
  {
    cout << "Las fracciones 1 y 3 son iguales" << endl;
  }
  else
  {
    cout << "Las fracciones 1 y 3 no son iguales" << endl;
  }

  if (F2.Comparar(F3))
  {
    cout << "Las fracciones 2 y 3 son iguales" << endl;
  }
  else
  {
    cout << "Las fracciones 2 y 3 no son iguales" << endl;
  }

  Fraccion Suma2 = F1 + F2 + F3;

  cout << "La suma de las 3 fracciones es: " << Suma2.aString() << endl;

  return 0;
}
