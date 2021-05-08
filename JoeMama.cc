#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
// g++ -o app2 Joe.cc


int main()
{
    const int MAXIMUM_WITHDRAW = 500;
    const double SERVICE_CHARGE = 0.04;
    const int THREE_HUNDRED = 300; 
    const int OVERDRAFT_FEE = 25; 

    double date; 
    double withdrawAmount; 
    double overThreehundred; 
    double accountBalance;
    double feeCalculation; 
    string costumerDecision; 
    bool maximumAmountReached;

    date = 1;
    accountBalance = 450;
    maximumAmountReached = false;
    overThreehundred = withdrawAmount * SERVICE_CHARGE;
    feeCalculation = withdrawAmount + OVERDRAFT_FEE;
    
    cout<< fixed << setprecision(2);
    cout << "Welcome " << endl;
    cout << "Amount you would like to withdraw: " << endl;
    cin >> withdrawAmount;

    if (withdrawAmount >= MAXIMUM_WITHDRAW){
        maximumAmountReached = true;
        cout << "Maximum Withdraw Amount is $500"<< endl; 
        return 0;
    } else if (withdrawAmount > THREE_HUNDRED)  {
        cout << "Our 4% fee: -";
        cout << withdrawAmount * SERVICE_CHARGE << endl;

    } else {
        maximumAmountReached = false; 
    }

    if (withdrawAmount >= accountBalance && withdrawAmount >= THREE_HUNDRED){
        cout << "You do not have enough money and there is extra charge are you ok ?"<< endl;
        cout << "Type Yes or Not"<< endl;
        cin >> costumerDecision;
        if (costumerDecision == "yes" || costumerDecision == "Yes"){
            cout << "Charge of $" << OVERDRAFT_FEE << endl; 
            cout << "You are withdrawing: $" << withdrawAmount - OVERDRAFT_FEE -(withdrawAmount*SERVICE_CHARGE)<< endl;
        } else {
            cout << "Bye" <<endl;
            return 0;
        }
    } else if (withdrawAmount >= accountBalance){
        cout << "You do not have enough money and there is extra charge are you ok ?"<< endl;
        cout << "Type Yes or Not"<< endl;
        cin >> costumerDecision;
        if (costumerDecision == "yes" || costumerDecision == "Yes"){
            cout << "Charge of $" << OVERDRAFT_FEE << endl; 
            cout << "You are withdrawing: $" << withdrawAmount - OVERDRAFT_FEE<< endl;
        } else {
            cout << "Bye" <<endl;
            return 0;
        }
    } else if (accountBalance <= 0) {
        cout << "No money sorry"<< endl;
        return 0;
    } else {
    cout << "You are withdrawing: $" << withdrawAmount - (withdrawAmount*SERVICE_CHARGE)<< endl;
    cout << "Remaining Balance: $"<< accountBalance - withdrawAmount <<endl;
    }

    return 0;
}
