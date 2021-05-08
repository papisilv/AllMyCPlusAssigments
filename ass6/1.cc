#include <iostream>
#include <iomanip>
#include <string>
#include<fstream>
using namespace std;

class CoffeeShop{
    public:
        void Menu();
        void BuyCoffee();
        void ShowCoffeeSold();
        void ShowProfit();
        void AmountOfCups();

    private:
        double profit = 0;

        const double smallPrice = 1.75;
        const double mediumPrice = 1.90;
        const double largePrice = 5.00;

        int smallsSold = 0;
        int mediumsSold = 0;
        int largesSold = 0;
};


void CoffeeShop::Menu(){
	int coffeeInput;

	while(coffeeInput != 9){
		cout << "Enter 1 to order coffee.\n";
		cout << "Enter 2 to check the total money made up to this time.\n";
		cout << "Enter 3 to check the total amount of coffe sold up to this time.\n";
		cout << "Enter 4 to check the number of cups of coffe of each size sold.\n";
		cout << "Enter 5 to print data.\n";
		cout << "Enter 9 to exit program.\n";
        //Enter input
		cin >> coffeeInput;
        //print input
		//pair<int, int> parsedString = ParseString(coffeeInput);
		//system("cls");
		switch(coffeeInput)
		{
			case 1:
                BuyCoffee();
			case 2:
                ShowProfit();
			case 3:
                ShowCoffeeSold();
				//system("cls");		
				break;
			case 4:
				AmountOfCups();
				break;
			case 5:
				ShowProfit();
				break;
		}
	}
}

void CoffeeShop::BuyCoffee(){
    int selector;
    while(selector != 9){
        cout << "Enter 1 buy coffee in a small cup size (9 oz)\n";
        cout << "Enter 2 buy coffee in a medium cup size (12 oz)\n";
        cout << "Enter 3 buy coffee in a large cup size (15 oz)\n";
        cout << "Enter 9 to exit program.\n";
        cin >> selector;
        switch(selector){
            case 1:
                //profit += smallPrice * amount;
                //smallsSold += amount;
                cout <<  " small coffie(s) bought for $" ;
                break;
            case 2:
                /*profit += mediumPrice * amount;
                mediumsSold += amount;
                cout << amount << " medium coffie(s) bought for $" << mediumPrice * amount;*/
                cout <<  " medium coffie(s) bought for $" ;
                break;
            case 3:
               /* profit += largePrice * amount;
                largesSold += amount;
                cout << amount << " large coffie(s) bought for $" << largePrice * amount;*/
                cout <<  " large coffie(s) bought for $" ;
                break;
            case 9:
                
                break;
	    }

	/*cout << "\n\nPress enter to continue.";
	cin.ignore();
	system("cls");*/
    }
}

void CoffeeShop::ShowCoffeeSold()
{
	cout << "Coffee Sold\n\n";
	cout << "Type\t\tAmount\n";
	cout << "Small\t\t" << smallsSold << "\n";
	cout << "Medium\t\t" << mediumsSold << "\n";
	cout << "Large\t\t" << largesSold << "\n\n";
	cout << "Total\t\t" << smallsSold + mediumsSold + largesSold << "\n\n";

	cout << "\n\nPress enter to continue.";
	cin.ignore();
	system("cls");
}

void CoffeeShop::ShowProfit()
{
	cout << "Profit\n\n";
	cout << "Profit some small coffies: " << smallsSold * smallPrice << "\n";
	cout << "Profit some medium coffies: " << mediumsSold * mediumPrice << "\n";
	cout << "Profit some large coffies: " << largesSold * largePrice << "\n";
	cout << "Total profit: " << (smallsSold * smallPrice) + (mediumsSold * mediumPrice) + (largesSold * largePrice);

	cout << "\n\nPress enter to continue.";
	cin.ignore();
	system("cls");

}

void CoffeeShop::AmountOfCups(){

}

int main(){
    CoffeeShop Menu;
    cout << "Code" << CoffeeShop.Menu;
    return 0;
}

