#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

const string ERROR = "ERROR";

class FM
{
  float minFrequency, maxFrequency, actualFrequency, step;

public:
  FM()
  {
    minFrequency = 80;
    maxFrequency = 108;
    actualFrequency = initializeFrequency();
    step = 0.5;
  }

public:
  void up()
  {
    if (actualFrequency + step > maxFrequency)
    {
      saveFrequency(maxFrequency);
    }
    else
    {
      actualFrequency += step;
      saveFrequency(actualFrequency);
    }
  }

  void down()
  {
    if (actualFrequency - step < minFrequency)
    {
      saveFrequency(minFrequency);
    }
    else
    {
      actualFrequency -= step;
      saveFrequency(actualFrequency);
    }
  }

  void showFrequency()
  {
    cout << "Actual frequency: " << actualFrequency << endl;
  }

private:
  float initializeFrequency()
  {
    string last = getLastLine();
    if (last == ERROR || !last.length())
    {
      return 80;
    }
    else
    {
      string aux;
      for (int i = 0; i < last.length(); i++)
      {
        aux += last[i];
        if (last[i] == ' ')
        {
          break;
        }
      }
      return stof(aux);
    }
  }

  string getLastLine()
  {
    string filename = "data.txt";
    ifstream file;
    string line;
    string aux;
    file.open(filename.c_str(), ios::in);
    if (file.is_open())
    {
      while (!file.eof())
      {
        getline(file, line);
        if (line.length())
        {
          aux = line;
        }
      }
      file.close();
      return aux;
    }
    else
    {
      return ERROR;
    }
  }

  string getTime()
  { // Obtener el tiempo actual
    time_t now = time(0);
    int time = now;
    // Convertir a una estructura tm
    tm *ltm = localtime(&now);
    string year = to_string(1900 + ltm->tm_year);
    string month = to_string(1 + ltm->tm_mon);
    string day = to_string(ltm->tm_mday);
    string hour = to_string(ltm->tm_hour);
    string minute = to_string(ltm->tm_min);
    string second = to_string(ltm->tm_sec);
    string code = to_string(now);
    return day + "/" + month + "/" + year + " " + hour + ":" + minute + ":" + second;
  }

  string prepareData(float actual)
  {
    return to_string(actual) + " " + getTime();
  }

  void saveFrequency(float actual)
  {
    string filename = "data.txt";
    ofstream file;
    string line;
    file.open(filename.c_str(), ios::app);
    if (file.is_open())
    {
      file << prepareData(actual) << endl;
      file.close();
      // cout << "Data saved successfully";
    }
    else
    {
      cout << "Error saving data";
    }
  }
};

void menu(FM &fm)
{
  int option;
  do
  {
    cout << "1. Up" << endl;
    cout << "2. Down" << endl;
    cout << "3. Show frequency" << endl;
    cout << "4. Exit" << endl;
    cout << "Option: ";
    cin >> option;
    switch (option)
    {
    case 1:
      fm.up();
      break;
    case 2:
      fm.down();
      break;
    case 3:
      fm.showFrequency();
      break;
    case 4:
      cout << "Exiting..." << endl;
      break;
    default:
      cout << "Invalid option" << endl;
      break;
    }
  } while (option != 4);
}

int main(int argc, char const *argv[])
{
  FM fm;
  menu(fm);
  return 0;
}
