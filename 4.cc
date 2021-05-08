#include <iostream>
#include <iomanip>
using namespace std;
//* g++ -o exp2 4.cc
//* ctrl alt n

int main()
{   
    const double TAX =0.14;
    const double CLOTHES =0.1;
    const double SCHOOL =0.01;
    const double SAVINGS =0.25;
    const double PARENTS=0.5;
   
    double payRate;
    double workHoursOne, workHoursTwo, workHoursThree, workHoursFour, workHoursFive;
    
    cout << "Enter the per hour pay rate: " <<endl;
    cin >> payRate;
    cout <<"Enter the number of hours worked for week 1: " <<endl;
    cin >> workHoursOne;
    cout <<"Enter the number of hours worked for week 2: " <<endl;
    cin >> workHoursTwo;
    cout <<"Enter the number of hours worked for week 3: " <<endl;
    cin >> workHoursThree;
    cout <<"Enter the number of hours worked for week 4: " <<endl;
    cin >> workHoursFour;
    cout <<"Enter the number of hours worked for week 5: " <<endl;
    cin >> workHoursFive;

    double income = payRate*(workHoursFive+workHoursFour+workHoursThree+workHoursTwo+workHoursOne);
    double netIncome =income-(income*TAX);
    double clothesFund =netIncome*CLOTHES;
    double schoolFund =netIncome*SCHOOL;
    double leftOverIncome = netIncome-(clothesFund+schoolFund);
    double savingsFund =leftOverIncome*SAVINGS;
    double parentsFund =savingsFund*PARENTS;

    cout<< fixed << setprecision(2);
    cout << "Total Income before tax: $" << income <<endl;
    cout << "Net Income: $" << netIncome <<endl;
    cout <<"Money spent on clothes and other accesories: $" << clothesFund<<endl;
    cout <<"Money spent on school supplies: $" << schoolFund<<endl;
    cout <<"Money spent to buy savings bonds: $" << savingsFund<<endl;
    cout <<"Money spent by parents to buy additional savings bonds: $" << parentsFund<<endl;
    return 0;
}