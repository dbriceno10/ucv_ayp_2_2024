/***

Ejemplo de lectura de archivo "fdata.txt" con lineas de la forma:

<palabra1> <entero1> <flotante1>
.
.
.
<palabraN> <enteroN> <flotanteN>

*/
#include <iostream>
#include <string>

//'ifstream', 'ofstream'
#include <fstream>

//'FILE'
#include <stdio.h>

//'atoi' 'atof'
#include <stdlib.h>

using namespace std;

struct Datos
{
 string palabra;
 int entero;
 float flotante; 
};

Datos datos[3]={{"aaa",1,10.1},{"bbb",2,20.2},{"ccc",3,30.3}};	

void lectura1(string nombreArchivo)
{
  FILE *archivo = fopen(nombreArchivo.c_str(), "r");

  if (archivo != NULL)
  {
    while (!feof(archivo))
    {
      //leer cada elemento de la linea en una variable
      char palabra[256];
      int entero;
      float flotante;

      //3 elementos por linea
      if (fscanf(archivo, "%s %d %f", palabra, &entero, &flotante) == 3)
      {
	   printf("%s %d %.1f\n", palabra, entero, flotante);
      }
    }

    fclose(archivo);
  }
  else
  {
    cout << "No se pudo abrir el archivo" << endl;
  }
}

void lectura2(string nombreArchivo)
{
  string line;
  ifstream archivo(nombreArchivo.c_str());
  if (archivo.is_open())
  {
    while (true)
    {
      //leer cada elemento de la linea en una variable
      string palabra;
      int entero;
      float flotante;

      //3 elementos por linea
      //verificar si el 1er elemento leido es fin de archivo
      archivo >> palabra;
      if (archivo.eof())
      {
        break;
      }
      archivo >> entero;
      archivo >> flotante;

      cout << palabra << " " << entero << " " << flotante << endl;
    }

    archivo.close();
  }
  else
  {
    cout << "No se pudo abrir el archivo" << endl;
  }
}

void lectura3(string nombreArchivo)
{
  string line;
  ifstream archivo(nombreArchivo.c_str());
  if (archivo.is_open())
  {
    while (!archivo.eof())
    {
      string palabra;
      int entero;
      float flotante;

      //leer linea completa
      getline(archivo, line);

      //separar cada elemento de la linea en strings individuales (tokens)
      string token = "";
      int elem = 0;
      for (int i = 0; i < line.size(); i++)
      {
        //concatenar caracteres
        token = token + line[i];

        //chequear fin de palabra
        if (i == line.size() - 1 || line[i+1] == ' ')
        {
          if (elem == 0)
          {
            palabra = token;
            elem++;

            cout << palabra << " ";
          }
          else if (elem == 1)
          {
            //convertir a entero
            entero = atoi(token.c_str());
            elem++;

            cout << entero << " ";
          }
          else
          {
            //convertir a flotante
            flotante = atof(token.c_str());
            elem = 0;

            cout << flotante << endl;
          }
          token = "";
        }
      }
    }

    archivo.close();
  }
  else
  {
    cout << "No se pudo abrir el archivo" << endl;
  }
}

void escritura1(string nombreArchivo)
{
  FILE *archivo = fopen(nombreArchivo.c_str(), "w");
  if (archivo != NULL)
  {
   for(int i=0; i<3; i++)
   {
    fprintf(archivo,"%s %d %.1f\n", datos[i].palabra.c_str(), datos[i].entero, datos[i].flotante);
   }

   fclose(archivo);
  }
  else
  {
    cout << "No se pudo abrir el archivo" << endl;
  }
}

void escritura2(string nombreArchivo)
{
  ofstream archivo(nombreArchivo.c_str());
  if (archivo.is_open())
  {
   for(int i=0; i<3; i++)
   {
    archivo << datos[i].palabra << " " << datos[i].entero << " " << datos[i].flotante << endl;
   }
  }
  else
  {
    cout << "No se pudo abrir el archivo" << endl;
  }
}


int main() {
  cout << "Lectura1:" << endl;
  lectura1("fdata.txt");
  cout << "---" << endl;
  cout << "Lectura2:" << endl;
  lectura2("fdata.txt");
  cout << "---" << endl;
  cout << "Lectura3:" << endl;
  lectura3("fdata.txt");
  cout << "---" << endl;
  cout << "Escritura1: ver archivo 'fdata_out1.txt'" << endl;
  escritura1("fdata_out1.txt");
  cout << "---" << endl;
  cout << "Escritura2: ver archivo 'fdata_out2.txt'" << endl;
  escritura2("fdata_out2.txt");
  
  return 0;
}