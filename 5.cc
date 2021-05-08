#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//* g++ -o 5 5.cc
//* ctrl alt n

int main()
{   
    //declare variables needed
    double amount, principal, rate, period;
    

    //prompt user to enter input then read
    cout << "Starting account balance: $" ;
    cin >> principal;

    cout << "Annual account interest rate in the format .03 (for 3%): ";
    cin >> rate;

    cout << "Number of times interest is compounded annually: ";
    cin >> period;
    cout << "\n - - Earnings Report - - \n" << endl;

    //calculate amount using formula
    amount = principal * pow((1 + rate/period), period);

    //display report
    
    cout << left << setw(20) <<"Interest Rate:" << right << setw(9) << rate*100 << "%"<< endl;
    cout << left << setw(20)<<"Times Compounded:"  << right << setw(9) << period << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(20)<<"Principal:"  << right <<"$"<< setw(8)  << principal << endl;
    cout << left << setw(20)<<"Interest:"  << right <<"$"<< setw(8)  << amount - principal << endl;
    cout << left << setw(20)<<"Final balance" << right <<"$"<< setw(8)  << amount << endl;
    
    //return 0 to mark successful termination
    return 0;
}