#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAX_PRODUCTS = 10;

enum ProductType
{
  A,
  B,
  C,
  D,
  E,
  F
};

struct Product
{
  string name;
  ProductType type;
  float price;
  string description;
  int code;
};

void printArray(Product products[], int size)
{
  for (int i = 0; i < size; i++)
  {
    if (products[i].type == C)
    {
      cout << "Product: " << products[i].name << endl;
      cout << "Type: " << products[i].type << endl;
      cout << "Price: " << products[i].price << endl;
      cout << "Description: " << products[i].description << endl;
      cout << "Code: " << products[i].code << endl;
      cout << endl;
    }
  }
}

void increasePrice(Product &product, ProductType type, float percentage)
{
  if (product.type == type)
  {
    cout << "Increasing price of " << product.name << " by " << percentage << "%" << endl;
    product.price += product.price * (percentage / 100);
  }
}

void increasePrices(Product products[], int size, ProductType type, float percentage)
{
  for (int i = 0; i < size; i++)
  {
    increasePrice(products[i], type, percentage);
  }
}

bool searchProduct(Product products[], int size, ProductType type)
{
  for (int i = 0; i < size; i++)
  {
    if (products[i].type == type)
    {
      return true;
    }
  }
  return false;
}

int main(int argc, char const *argv[])
{
  Product products[MAX_PRODUCTS] = {
      {"Product A", A, 10.5, "Description A", 1},
      {"Product B", B, 20.5, "Description B", 2},
      {"Product C", C, 30.5, "Description C", 3},
      {"Product D", D, 40.5, "Description D", 4},
      {"Product E", E, 50.5, "Description E", 5},
      {"Product F", F, 60.5, "Description F", 6},
      {"Product G", A, 70.5, "Description G", 7},
      {"Product H", B, 80.5, "Description H", 8},
      {"Product I", C, 90.5, "Description I", 9},
      {"Product J", D, 100.5, "Description J", 10}};
  printArray(products, MAX_PRODUCTS);
  increasePrices(products, MAX_PRODUCTS, C, 10);
  printArray(products, MAX_PRODUCTS);

  /* code */
  return 0;
}
