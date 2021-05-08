
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
    var =1;
    char i = 'A';
    //firstNum = 9;
    //secondNum = 39;
    
    cout << "Enter two Numbers.\nFirst number must be less than the second number you enter\nEnter numbers: ";
    cin >> firstNum >> secondNum;
    odd= firstNum;
    even = firstNum;
    cout << endl;
    //Odd numbers
    cout << "Odd integers between " << firstNum << " and " <<secondNum << " are:\n" ;
    do{
        if(odd%2 == 1){
            oddSum =  oddSum+floor(pow(odd,2));
            cout << odd << " ";   
        } 
        odd++;
    }while(odd<=secondNum);
    cout << "\n\nSum of the squares of odd integers between " << firstNum << " and " <<secondNum<<" = "<< oddSum<< endl;  
    //Even numbers
    cout << "\nEven integer between " << firstNum << " and " <<secondNum << " are:\n";
    do{
        if(even%2 == 0){
            evenSum =  evenSum+even;
            cout << even << " ";
        } 
        even++;
    }while(even<=secondNum);
    cout << "\nSum of even integers between " << firstNum << " and " <<secondNum<<" = "<< evenSum<< endl;
    //Square numbers
    cout<< "\nNumber " << " Square of Number"<< endl;
    do{
        varSqr = floor(pow(var,2));
        cout<< right<<setw(4)<<var << " " <<right<<  setw(15)<<varSqr<<endl;
        var++;
    }while(var <= 10);
     //Alphabet
    cout << "\n\nUpper case letters are: ";
    do{
        cout<< i << " ";
        i++;
    }while(i <= 'Z');
    return 0;
}