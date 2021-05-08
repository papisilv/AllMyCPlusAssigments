#include <iostream>
#include <iomanip>
#include<fstream>
using namespace std;

int main (){
  int  even=0, odd=0, var, num;

  ifstream inpFile("input.txt");
  ofstream outFile("output.txt");

  outFile << "The numbers you enter are: "<<endl;    
  cout << "The numbers you enter are: "<<endl;  
  while(!inpFile.eof()){
    inpFile >> num;
    outFile << num << " ";
    cout << num << " ";
    if (num%2==0){
      even = num+even;
    }
    if (num%2!=0){
      odd = num+odd;
    } 
  }
  outFile << "\n\nEven sum: " << even;
  outFile << "\nOdd sum: " << odd;
  cout << "\n\nEven sum: " << even;
  cout << "\nOdd sum: " << odd;
  return 0;
}