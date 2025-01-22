#include <iostream>
using namespace std;

float millasAKilometros(float millas)
{
  return millas * 1.60934;
}

void distanceCities(string city1, string city2, float millas)
{
  cout << "La distancia entre " << city1 << " y " << city2 << " es de " << millasAKilometros(millas) << " kilometros" << endl;
}

int main(int argc, char const *argv[])
{
  /* code */
  string city1 = "", city2 = "";
  float millas = 0;
  cout << "Ingrese el nombre de la primera ciudad: ";
  cin >> city1;
  cout << "Ingrese el nombre de la segunda ciudad: ";
  cin >> city2;
  cout << "Ingrese la distancia en millas entre " << city1 << " y " << city2 << ": ";
  cin >> millas;
  distanceCities(city1, city2, millas);
  return 0;
}
