// Programmer: John Thompson
// Description: HW5_P4
// Date: 09 / 21 / 2022

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  bool modulo [42];

  cout << "Enter ten number values: " << endl;
  
    for (int i = 0; i < 42; i++) 
    {
        modulo [i] = false;
    }

    for (int k = 0; k < 10; k++)
      {
        int num_values;
        
        cin >> num_values;
        
        modulo [num_values % 42] = true;
      }

    int dist_value = 0;

    for (int g = 0; g < 42; g++) 
      {
        if (modulo [g]) 
        {
          dist_value++;
        }
      }

    cout << "The distinct value is: " << dist_value << endl;

   return 0;
}