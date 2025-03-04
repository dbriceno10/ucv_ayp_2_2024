#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Persona
{
  string fullname;
  int cedula;
  int edad;
  char sexo;
};

void leer(string filename, Persona registros[], int &size)
{
  ifstream file;
  file.open(filename.c_str(), ios::in);
  if (file.is_open())
  {
    file >> size;
    for (int i = 0; i < size; i++)
    {
      string nombre, apellido;
      file >> nombre;
      file >> apellido;
      registros[i].fullname = nombre + " " + apellido;
      file >> registros[i].cedula;
      file >> registros[i].edad;
      file >> registros[i].sexo;
    }
    file.close();
  }
  else
  {
    cout << "No se pudo abrir el archivo" << endl;
  }
}

void guardar(string filename, Persona registro)
{
  ofstream file;
  file.open(filename.c_str(), ios::app);
  if (file.is_open())
  {
    ;
    string entrada = registro.fullname + " " + to_string(registro.cedula) + " " + to_string(registro.edad) + " " + registro.sexo;
    file << entrada << endl;
    file.close();
  }
  else
  {
    cout << "No se pudo abrir el archivo" << endl;
  }
}

int main(int argc, char const *argv[])
{
  Persona registros[100];
  int cantidad = 0;
  leer("personas.txt", registros, cantidad);
  for (int i = 0; i < cantidad; i++)
  {
    // cout << registros[i].fullname << endl;
    // cout << registros[i].cedula << endl;
    // cout << registros[i].edad << endl;
    // cout << registros[i].sexo << endl;
    // cout << endl;
    if (registros[i].edad > 18)
    {
      guardar("mayores.txt", registros[i]);
    }
  }
  return 0;
}
