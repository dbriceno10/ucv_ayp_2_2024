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

  string aString()
  {
    // string n = stoi(Numerador);
    Simplificar();
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

  bool Comparar(Fraccion F)
  {
    F.Simplificar();
    Simplificar();
    return Numerador == F.getNumerador() && Denominador == F.getDenominador();
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
};

int SolicitarNumero(string message)
{
  int n;
  cout << message;
  cin >> n;
  return n;
}

void menu(Fraccion F1, Fraccion F2)
{
  int option = 0;
  do
  {
    cout << "1. Sumar fracciones" << endl;
    cout << "2. Restar fracciones" << endl;
    cout << "3. Multiplicar fracciones" << endl;
    cout << "4. Dividir fracciones" << endl;
    cout << "5. Comparar fracciones" << endl;
    cout << "6. Salir" << endl;
    option = SolicitarNumero("Ingrese una opcion: ");
    if (option == 1)
    {
      Fraccion F3 = F1.Sumar(F2);
      cout << "La suma de las fracciones es: " << F3.aString() << endl;
    }
  } while (option != 6);
}

int main()
{
  int N1, N2, D1, D2;
  N1 = SolicitarNumero("Ingrese el numerador de la fraccion 1: ");
  D1 = SolicitarNumero("Ingrese el denominador de la fraccion 1: ");
  N2 = SolicitarNumero("Ingrese el numerador de la fraccion 2: ");
  D2 = SolicitarNumero("Ingrese el denominador de la fraccion 2: ");

  Fraccion F1(N1, D1), F2(N2, D2);

  return 0;
}
