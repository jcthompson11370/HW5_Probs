// Programmer: John Thompson
// Description: HW5_P4
// Date: 09 / 21 / 2022

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  bool modulo [42];

  cout << "Enter ten number values: " << endl;
  
    for (int i = 0; i < 42; i++) // "for" loop for bool modulo [42] value
    {
        modulo [i] = false;  
    }

    for (int k = 0; k < 10; k++) // use mod math with number inputs to output a true statement with bool modulo [42]
      {
        int num_values;
        
        cin >> num_values; // input ten values into for loop for mod math
        
        modulo [num_values % 42] = true;
      }

    int dist_value = 0;

    for (int g = 0; g < 42; g++) 
      {
        if (modulo [g]) // if modulo is less than 42, then the distinct value adds up until it reaches limit in for loop
        {
          dist_value++;
        }
      }

    cout << "The distinct value is: " << dist_value << endl;

   return 0;
}