#include <iostream>

using namespace std;

class A
{
protected:
  int R[99];

public:
  A()
  {
    for (int i = 0; i < 99; i++)
    {
      R[i] = random() % 100;
    }
  }

  void printA()
  {
    cout << "printA" << endl;
    for (int i = 0; i < 99; i++)
    {
      cout << R[i] << " ";
    }
    cout << endl;
  }
};

class C
{
  int y, x;

public:
  int h[99];
  C()
  {
    y = 50, x = 60;
    for (int i = 0; i < 99; i++)
    {
      h[i] = random() % 100;
    }
  }
  void printC()
  {
    cout << "printC" << endl;
    for (int i = 0; i < 99; i++)
    {
      cout << h[i] << " ";
    }
    cout << y << endl;
    cout << x << endl;
  }
};

class B : public A
{
public:
  C t[55];
  B()
  {
    for (int i = 0; i < 55; i++)
    {
      t[i] = C();
    }
  }
  void printB()
  {
    cout << "printB" << endl;
    for (int i = 0; i < 55; i++)
    {
      t[i].printC();
    }
    printA();
  }
};

class Main
{
public:
  void m1(B arr[], int N)
  {
    for (int i = 0; i < N; i++)
    {
      arr[i].printB();
    }
  };
  void m2(C arr[], int N)
  {
    for (int i = 0; i < N; i++)
    {
      arr[i].printC();
    }
  }
};

int main(int argc, char const *argv[])
{
  B arrB[5];
  C arrC[5];
  for (int i = 0; i < 5; i++)
  {
    arrC[i] = C();
    arrB[i] = B();
  }
  Main m;
  cout << "m1" << endl;
  m.m1(arrB, 5);
  cout << "m2" << endl;
  m.m2(arrC, 5);
  return 0;
}
