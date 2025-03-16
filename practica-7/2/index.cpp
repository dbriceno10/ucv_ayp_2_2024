#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

struct coordenadas
{
  float x;
  float y;
  float z;
};

void readFileA(string path)
{
  fstream file;
  file.open(path, ios::in);
  if (file.is_open())
  {
    string line;
    while (getline(file, line))
    {
      cout << line << endl;
    }
    file.close();
  }
  else
  {
    cout << "No se pudo abrir el archivo" << endl;
  }
}

void readFileB(string path)
{
  // const char *characters = path.c_str();
  // const int length = path.length();
  // for (int i = 0; i < length; i++)
  // {
  //   cout << path[i] << endl;
  // }
  // cout << characters << endl;
  ifstream file(path.c_str());
  if (file.is_open())
  {
    string line;
    while (getline(file, line))
    {
      cout << line << endl;
    }
    file.close();
  }
  else
  {
    cout << "No se pudo abrir el archivo" << endl;
  }
}

void readFileC(string path, coordenadas array[])
{
  fstream file;
  int contador = 0;
  file.open(path, ios::in);
  if (file.is_open())
  {
    while (!file.eof())
    {
      float c1, c2, c3;
      file >> c1;
      file >> c2;
      file >> c3;
      coordenadas aux = {c1, c2, c3};
      array[contador] = aux;
      contador++;
    }
    file.close();
  }
  else
  {
    cout << "No se pudo abrir el archivo" << endl;
  }
}

float diatancia(coordenadas coord1, coordenadas coord2)
{
  float x = pow(coord2.x - coord1.x, 2);
  float y = pow(coord2.y - coord1.y, 2);
  float z = pow(coord2.z - coord1.z, 2);
  return sqrt(x + y + z);
}

void guardarDistancia(string filename, float distancia)
{
  ofstream file(filename.c_str());
  if (file.is_open())
  {
    file << "Distancia: " << distancia << endl;
    file.close();
  }
  else
  {
    cout << "No se pudo abrir el archivo" << endl;
  }
}

int main(int argc, char const *argv[])
{
  string path = "data.txt";
  coordenadas array[2];
  readFileC(path, array);
  coordenadas coord1 = array[0];
  coordenadas coord2 = array[1];
  cout << "Distancia: " << diatancia(coord1, coord2) << endl;
  guardarDistancia("distancia.txt", diatancia(coord1, coord2));
  /* code */
  return 0;
}
