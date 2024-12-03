#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  /* code */
  float distancia = 0, tiempo = 0;
  cout << "Introduzca distancia recorrida (metros)" << endl;
  cin >> distancia;
  cout << "Introduzca tiempo tardado en recorrer dicha distancia (segundos)" << endl;
  cin >> tiempo;
  //*velocidad(rapidez) = distancia/tiempo

  const float velodidad = distancia / tiempo;
  cout << "la velocidad fue de " << velodidad << " m/s" << endl;
  return 0;
}
