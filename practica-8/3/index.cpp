#include <iostream>
#include <string>

using namespace std;

class Common
{
protected:
  int iva;
  int discount;
  float basePrice;

public:
  Common() {}
  float getPrice()
  {
    return basePrice + basePrice * ((float)iva / 100) - basePrice * ((float)discount / 100);
  }
};

class Libro : public Common
{

public:
  string title;
  string author;
  string anio;
  Libro(string title, string author, string anio, int discount, float basePrice)
  {
    this->author = author;
    this->title = title;
    this->anio = anio;
    this->discount = discount;
    iva = 8;
    this->basePrice = basePrice;
  }
  void print()
  {
    cout << "title " << title << endl;
    cout << "author " << author << endl;
    cout << "anio  " << anio << endl;
    cout << "discount " << discount << endl;
    cout << "iva " << iva << endl;
    cout << "basePrice " << basePrice << endl;
  }
};

class CD : public Common
{

public:
  string title;
  string author;
  string anio;
  CD(string title, string author, string anio, int discount)
  {
    this->author = author;
    this->title = title;
    this->anio = anio;
    this->discount = discount;
    iva = 8;
  }
  void print()
  {
    cout << "title " << title << endl;
    cout << "author " << author << endl;
    cout << "anio  " << anio << endl;
    cout << "discount " << discount << endl;
    cout << "iva " << iva << endl;
    cout << "basePrice " << basePrice << endl;
  }
};

int main(int argc, char const *argv[])
{
  Libro lib("memories", "daniel", "04/02/2025", 20, 1000);
  cout << lib.getPrice() << endl;
  lib.print();

  /* code */
  return 0;
}
