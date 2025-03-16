#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int const MAX_SIZE = 100;

struct Dato
{
  char character;
  int frequency;
};

int find(Dato data[], int &size, char character)
{
  for (int i = 0; i < size; i++)
  {
    if (data[i].character == character)
    {
      data[i].frequency++;
      return i;
    }
  }
  return -1;
}

void readFile(string filename, Dato data[], int &size)
{
  ifstream file;
  // file.open(filename);
  file.open(filename.c_str(), ios::in);
  if (!file.is_open())
  {
    cout << "Error al abrir el archivo" << endl;
    return;
  }
  while (!file.eof())
  {
    char character;
    file >> character;
    int position = find(data, size, character);
    if (position == -1)
    {
      data[size].character = character;
      data[size].frequency = 1;
      size++;
    }
    else
    {
      data[position].frequency++;
    }
  }
  file.close();
}

void saveData(string filename, Dato data[], int size)
{
  ofstream file;
  file.open(filename.c_str(), ios::out);
  if (!file.is_open())
  {
    cout << "Error al abrir el archivo" << endl;
    return;
  }
  for (int i = 0; i < size; i++)
  {
    file << data[i].character << " " << data[i].frequency << endl;
  }
  file.close();
}

int main(int argc, char const *argv[])
{
  string filename = "letras.txt";
  Dato data[MAX_SIZE];
  int size = 0;
  readFile(filename, data, size);
  saveData("frecuencias.txt", data, size);

  /* code */
  return 0;
}
