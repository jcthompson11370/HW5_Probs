// Programmer: John Thompson
// Description: HW5_P2
// Date: 09 / 21 / 2022

#include <iostream>
#include <fstream>

using namespace std;

int main() {

  int dataTemp;
  int sumData = 0;
  int counter = 0;
  
  //load input file
  ifstream inFile; // declare stream variable
  inFile.open("NumberData1.txt");

  //load data in while loop
  while (inFile >> dataTemp)
    {
      inFile >> dataTemp;
      // cout << dataTemp << endl; (void code)

      // check to see if data is valid
      if (dataTemp >= 0)
      {
        // update cumulative value of all data and number of             data points loaded
        sumData = sumData + dataTemp;
        counter++;
      }

      else // the value is negative and should exit
      {
        cout << "Negative value encountered: " << dataTemp << "." << endl;
        cout << "Will not continue data usage... " << endl;
        break;
      }
    }

  cout << "The sum of valid data: " << sumData << endl;
  cout << "The number of valid data points: " << counter << endl;
  cout << "The average of valid data points: " << (static_cast<double>(sumData) / counter) << endl;
  
  return 0;
}