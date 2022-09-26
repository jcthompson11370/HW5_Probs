// Programmer: John Thompson
// Description: HW5_P4
// Date: 09 / 21 / 2022

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  bool modulo [42];
  
    for (int i = 1; i < 42; i++) 
    {
        modulo [i] = false;
    }

    for (int i = 0; i < 10; i++)
      {
        int num_values;
        
        cin >> num_values;
        
        modulo [num_values % 42] = true;
      }

    int dist_value = 0;

    for (int i = 0; i < 42; i++) 
      {
        if (modulo [i]) 
        {
          dist_value++;
        }
      }

    cout << dist_value << endl;

   return 0;
}