#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    int firstNum, secondNum, odd, even, oddSum, evenSum, var, varSqr;
    oddSum=0;
    evenSum=0;
    
    cout << "Enter two Numbers.\nFirst number must be less than the second number you enter\nEnter numbers: ";
    cin >> firstNum >> secondNum;
    odd= firstNum;
    even = firstNum;
    cout << endl;
    //Odd numbers
    cout << "Odd integers between " << firstNum << " and " <<secondNum << " are:\n" ;
    for(odd; odd <= secondNum; odd++){
        if(odd%2 != 0){
            oddSum =  oddSum+floor(pow(odd,2));
            cout << odd << " ";   
        }  
    } 
    cout << "\n\nSum of the squares of odd integers between " << firstNum << " and " <<secondNum<<" = "<< oddSum<< endl;  
    //Even numbers
    cout << "\nEven integer between " << firstNum << " and " <<secondNum << " are:\n";
    for(even; even <= secondNum; even++){
        if(even%2 == 0){
            evenSum =  evenSum+even;
            cout << even << " ";
        }  
    } 
    cout << "\nSum of even integers between " << firstNum << " and " <<secondNum<<" = "<< evenSum<< endl;
    //square numbers
    cout<< "\nNumber " << " Square of Number"<< endl;
    for(var = 1; var<=10; var++){
        varSqr = floor(pow(var,2));
        cout<< right<<setw(4)<<var << " " <<right<<  setw(15)<<varSqr<<endl;
    }
    //Alphabet
    cout << "\n\nUpper case letters are: ";
    for(char i = 'A'; i<='Z'; i++){
        cout<< i << " ";
    }

    return 0;
}