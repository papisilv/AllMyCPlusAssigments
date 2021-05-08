#include <iostream>
#include <iomanip>
#include <string>
#include<fstream>
#include <fstream>
using namespace std;
/*
Function to show the user how to use the program    !!   
Function to sell coffee                             !! 
Function to show total amount of coffee sold        !!
Function to show total money made (Profit)          !!       
Function to show number of cups of each size        !!
Function to print Data                              !!
*/


void InitialMessage();
void BuyCoffee(int coffeeInput, double& profit, double smallCups, double mediumCups, double largeCups, int& sC, int&  mC, int&  lC);
double ShowProfit(double& profit);
double CoffeeCalculator(double cups, double price);
void TotalCups(int small, int medium, int large);
void TotalCoffee(int small, int medium, int large);
void PrintData(ofstream& out,int& sC, int&  mC, int&  lC, double& profit);

int main(){
    ofstream out("coffeeData.txt");
    const double SMALL = 1.75;
    const double MEDIUM = 1.90;
    const double LARGE = 2.00;
    int sC=0, mC=0,lC=0;
    double profit=0;
    int input;
    while(input != 9){
        InitialMessage();
        cin >> input;
        switch(input){
			case 1:
                BuyCoffee(input, profit, SMALL, MEDIUM, LARGE, sC,  mC,  lC);
                break;
			case 2:
                cout << "Total money made up to this time is $"<< ShowProfit(profit) << endl;
                break;
			case 3:
                TotalCups(sC, mC, lC);
				break;
			case 4:
				TotalCoffee(sC, mC, lC);
				break;
			case 5:
				PrintData(out,sC, mC,lC, profit);
				break;
		}
    }		
    return 0;
}

void InitialMessage(){
    cout << "Enter 1 to order coffee.\n";
	cout << "Enter 2 to check the total money made up to this time.\n";
	cout << "Enter 3 to check the total amount of coffe sold up to this time.\n";
	cout << "Enter 4 to check the number of cups of coffe of each size sold.\n";
	cout << "Enter 5 to print data.\n";
	cout << "Enter 9 to exit program.\n";   
};

void BuyCoffee(int coffeeInput, double& profit, double smallCups, double mediumCups, double largeCups, int& sC, int&  mC, int&  lC){
    int cups;
	while(coffeeInput != 9){
		cout << "Enter 1 buy coffee in a small cup size (9 oz)\n";
        cout << "Enter 2 buy coffee in a medium cup size (12 oz)\n";
        cout << "Enter 3 buy coffee in a large cup size (15 oz)\n";
        cout << "Enter 9 to exit program.\n";
		cin >> coffeeInput;
		switch(coffeeInput){
			case 1:
                cout << "Enter number of cups: " ;
                cin >> cups;
                sC += cups;
                profit += CoffeeCalculator(cups, smallCups); 
                break;
			case 2:
                cout << "Enter number of cups: " ;
                cin >> cups;
                mC += cups;
                profit += CoffeeCalculator(cups, mediumCups); 
                break;
			case 3:
                cout << "Enter number of cups: " ;
                cin >> cups;
                lC+= cups;	
                profit += CoffeeCalculator(cups, largeCups); 	
				break;
			case 9:
                cout << "Please pay $"<< profit << endl;  
                ShowProfit(profit);
				break;	
		}
	}
}

double CoffeeCalculator(double cups, double price){
    double amount = cups*price;
    return amount;
}

double ShowProfit(double& profit){
    double temp = profit;
    return temp;  
}

void TotalCups(int small, int medium, int large){
    cout << "Number of cups of each size: " << small << " small " << medium << " medium " << large << " large" <<endl;
}

void TotalCoffee(int small, int medium, int large){
    cout << "Total amount of coffee sold: " <<small+medium+large << endl;
}

void PrintData(ofstream& out,int& sC, int&  mC, int&  lC, double& profit){
    out << "Total money made up to this time is $"<< ShowProfit(profit) << endl;
    out << "Number of cups of each size: " << sC << " small " << mC << " medium " << lC << " large" <<endl;
    out << "Total amount of coffee sold: " <<sC+mC+lC<< endl;
}


for (int i = 0; i < 7; i++){
        cout<<weekDays[i]<<endl;
    }
    
    cout<<"Print " << weekDays[6];
