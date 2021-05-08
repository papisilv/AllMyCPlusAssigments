#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double netBalance,d1,payment,interest,d2,monthlyInterestRate,averageDailyBalance;

    cout << "Enter net Balance: ";
    cin >> netBalance;
    cout << "Enter number of days in the billing cycle: ";
    cin >> d1;
    cout << "Enter payment made: ";
    cin >> payment;
    cout << "Enter number of days payment is made before billing cycle: ";
    cin >> d2;
    cout  << "Enter interest per month: ";
    cin >> monthlyInterestRate;

    averageDailyBalance = (netBalance * d1 - payment * d2)/d1;
    interest = averageDailyBalance * monthlyInterestRate;

    cout << fixed << setprecision(2);
    cout << "\nYou have entered the following inputs ...:" << endl;
    cout << "Net Balance = $" << netBalance <<"         " << "Payment Amount = $" << payment << endl;
    cout << "Days before billing cycle = " << d2 << "          " << "Days in the billing cycle = " << d1 << endl;
    cout << "Interest on the unpaid balance of $" << netBalance << endl;
    cout << "at the rate of " << ceil(monthlyInterestRate *100)/100<< " per month is: $" << interest << endl;
    system("pause");

    
    return 0;
}
