#include <iostream>
#include <cstdlib>
using namespace std;

int main (void)
{
  int uChoice = 0;
  float Cel = 0.0;
  float Far = 0.0;
  float Kel = 0.0;
  float uCel = 0.0;
  float uFar = 0.0;
  boot looping = true;

  while (looping == true)
  {
    cout << "1) Celsius to Fahrenheit\n";
    cout << "2) Fahrenheit to Celsius\n";
    cout << "3) Celsius or Fahrenheit to Kelvin\n";
    cout << "4) Exit\n\n";
    cout << ">>";
    system ("clear");

    if (uChoice == 1)
    {
      cout << "Enter the Celsius value: ";
      cin >> uCel;
      Far = uCel * 9.0/5.0 + 32.0;
      cout << "\nFahrenheit: " << Far;
      cout << "\n\n";
    }

    else if (uChoice == 2)
    {
      cout << "Enter the Fahrenheit value: ";
      cin << uFar;
      Cel = (uFar - 32.0) * 5.0/9.0;
      cout << "\nCelsius: " << Cel;
      cout << "\n\n";
    }

    else if (uChoice == 3)
    {
      cout << "1) Celsius to Kelvin\n";
      cout << "2) Fahrenheit to Kelvin \n\n";
      cout << ">>";
      cin >> uChoice;
      system ("clear");

      if (uChoice == 1)
      {
        cout << "Enter Celsius value: ";
        cin >> uCel;
        Kel = uCel + 273.15;
        if (uCel < 0.0)
        {
          cout << "\nInvalid Input.\n";
          looping = false;
        }

        else
        {
          cout << "\nKelvin: " << Kel;
          cout << "\n\n";
        }
      }

      else if (uChoice == 2)
      {
        cout << "Enter Fahrenheit value: ";
        cin >> uFar;

        if (uFar < 32.0)
        {
          cout << "\n Invalid Input.\n";
          looping = false;
        }

        else
        {
          cout << "\nKelvin: " << Kel;
          cout << "\n\n";
        }
      }
    }

    else if (uChoice == 4)
    {
      cout << "\n\n Computing Complete Milord!\n";
      looping = false;
    }

    else
    {
      cout << "\nUnknown Input(" << uChoice << ")\n\n\n";
    }
  }

  return (0);
}
