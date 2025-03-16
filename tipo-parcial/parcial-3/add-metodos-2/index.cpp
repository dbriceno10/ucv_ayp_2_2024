#include <iostream>
using namespace std;

class Uno
{
protected:
  int A[11];

public:
  Uno()
  {
    for (int i = 0; i < 11; i++)
    {
      A[i] = random() % 100;
    }
  }
  void printA()
  {
    cout << "printA" << endl;
    for (int i = 0; i < 11; i++)
    {
      cout << A[i] << " ";
    }
    cout << endl;
  }
  void printUno()
  {
    cout << "printUno" << endl;
    printA();
  }
};

class Tres
{
  int C[33];

public:
  int D[33];

  Tres()
  {
    for (int i = 0; i < 33; i++)
    {
      C[i] = random() % 1000;
      D[i] = random() % 50;
    }
  }
  void printC()
  {
    cout << "printC" << endl;
    for (int i = 0; i < 33; i++)
    {
      cout << C[i] << " ";
    }
    cout << endl;
  }
  void printD()
  {
    cout << "printD" << endl;
    for (int i = 0; i < 33; i++)
    {
      cout << D[i] << " ";
    }
    cout << endl;
  }
  void printTres()
  {
    cout << "printTres" << endl;
    printC();
    printD();
  }
};

class Dos : public Uno
{
  Tres B[22];

public:
  Dos()
  {
    for (int i = 0; i < 22; i++)
    {
      B[i] = Tres();
    }
  }
  void printB()
  {
    cout << "printB" << endl;
    for (int i = 0; i < 22; i++)
    {
      B[i].printTres();
    }
  }
  void printDos()
  {
    cout << "printDos" << endl;
    printB();
    printUno();
  }
};

void f1(Dos arr[], int N)
{
  for (int i = 0; i < N; i++)
  {
    arr[i].printB();
  }
};
void f2(Tres arr[], int N)
{
  for (int i = 0; i < N; i++)
  {
    arr[i].printC();
  }
}

int main(int argc, char const *argv[])
{
  Dos arrDos[5];
  Tres arrTres[5];
  for (int i = 0; i < 5; i++)
  {
    arrDos[i] = Dos();
    arrTres[i] = Tres();
  }

  cout << "f1" << endl;
  f1(arrDos, 5);
  cout << "f2" << endl;
  f2(arrTres, 5);
  return 0;
}
