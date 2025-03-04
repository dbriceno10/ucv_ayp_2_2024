#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  fstream archivo;
  string nombreArchivo = "data.txt";
  archivo.open(nombreArchivo, ios::in);
  if (archivo.is_open())
  {
    string line;
    while (getline(archivo, line))
    {
      cout << line << endl;
    }
    archivo.close();
  }
  else
  {
    cout << "No se pudo abrir el archivo" << endl;
  }
  return 0;
}
