// Programmer: John Thompson
// Description: HW5_P5
// Date: 09 / 21 / 2022

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

  // initialize variables
  int NumOfLawns; 
  double SeedCost; //cost per sqr. meter
  double AreaTotal; //area of all lawns in sqr. meters

  //input variables
  cout << "input number of lawns: " << endl;
  cin >> NumOfLawns;

  cout << "input cost of seed: " << endl;
  cin >> SeedCost;

  //start loop
  for (int i = 0; i < NumOfLawns; i++)
    {
      double length;
      double width;

      cin >> length >> width;
      
      AreaTotal += length * width; // equation for area of a sqr. or rect. 
    }

  return 0;
}
