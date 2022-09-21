// Programmer: John Thompson
// Description: HW5_P1
// Date: 09 / 21 / 2022

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

  // declare variables
  string firstName;
  string date;
  int TestResult;
  int count = 0;
  int cumulative_cases = 0;

  // declare stream variables
  ifstream inFile; // needed to access the file we want to load
  ofstream outFile;

  // open the input file
  inFile.open("TestResultsData.dat");

  // read in the date - first line of the file
  inFile >> date;
  cout << date << endl;

  // read in the 2 pieces of info on the second line
  inFile >> firstName;
  cout << firstName << ' ';
  inFile >> TestResult;
  cout << TestResult << endl;

  while (inFile)
    {
      // update number of cass & persons tested 
      cumulative_cases += TestResult;
      count++; // increment the number of patients

      // read in the next line
      inFile >> firstName;
      inFile >> TestResult;
      
    }
  cout << cumulative_cases << endl;
  cout << count << endl;
  
  inFile.close();

  

  
  
  

  return 0;
}