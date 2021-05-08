#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class CoffeeShop
{
public:
	void Menu();
	void BuyCoffee(int type, int amount);
	void ShowCoffeeSold();
	void ShowProfit();

private:
	double profit = 0;

	const double smallPrice = 1.75;
	const double mediumPrice = 1.90;
	const double largePrice = 5.00;

	int smallsSold = 0;
	int mediumsSold = 0;
	int largesSold = 0;
};

void Menu(int){
    
}