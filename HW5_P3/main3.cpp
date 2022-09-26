// Programmer: John Thompson
// Description: HW5_P3
// Date: 09 / 21 / 2022

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

  int Temp; // Measured temperature
  int Ws;  // wind speed variable
  
  const double K1 = 13.12; // const double for conversion factors
  const double K2 = 11.37;
  const double K3 = 0.3965;

  for (int Temp = 2; Temp <= 10; Temp += 4)
    {
      cout << "Ws variable" << endl;
      cin  >> Ws; // enter wind speed variable into loop

      for (int Ws = 5; Ws <= 11; Ws += 2)
        {
          double WCI = K1 + (0.6125 * Temp) - (K2 * pow(Ws, 0.16)) + (K3 * Temp * (Ws, 0.16));

          cout << setw(3) << "Measured Temperature = " << Temp << " C" << ' ';

          cout << setw(3) << "Wind Speed = " << Ws << " km/hr" << ' ';

          cout << setw(3) << " Wind Chill Index = " << WCI << endl;
        }     
    }
  return 0;
}