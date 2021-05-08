#include <iostream>
#include <iomanip>
#include<fstream>
using namespace std;

int main (){
    double rent=0, maintenance=0, maintenanceCost=0,rentIncrement=0,income,profit, maxProfit=0;
    int units=0,bestUnit=0,start=0;
    ofstream outFile;
    
    cout << "\nEnter the number of apartments: ";
    while(!(cin >> units) || units <0){
        cout << "WRONG INPUT!\n";
        cout << "Enter the NUMBER of apartments and must be a NUMBER greater than 0: ";
        cin.clear();
        cin.ignore(132,'\n');
    }
    cout << "\nEnter rent for each apartment: ";
    while(!(cin >> rent) || rent <0){
        cout << "WRONG INPUT!\n";
        cout << "Enter rent for each apartment and must be a NUMBER greater than 0, please!: ";
        cin.clear();
        cin.ignore(132,'\n');
    }
    cout << "\nEnter maintenance expense for each rented apartment: ";
    while(!(cin >> maintenanceCost) || maintenanceCost <0){
        cout << "WRONG INPUT!\n";
        cout << "Enter maintenance expense for each rented apartment and must be a NUMBER greater than 0: ";
        cin.clear();
        cin.ignore(132,'\n');
    }
    cout << "\nEnter the amount of rent increase per apartment: ";
    while(!(cin >> rentIncrement) || rentIncrement <0){
        cout << "WRONG INPUT!\n";
        cout << "Enter the amount of rent increase per apartment and must be a NUMBER greater than 0: ";
        cin.clear();
        cin.ignore(132,'\n');
    }

    outFile.open("apartments.txt");    
    for(start; start < units; start++){
        income = (units*rent)-(start*rent);
        maintenance = (units-start)*maintenanceCost;
        profit = income - maintenance;
        if (profit > maxProfit){
            maxProfit = profit;
            bestUnit = (units-start);
        }
        outFile<<"Rent: "<<rent<<" Units: "<<units-start<<" Maintnance: "<<maintenance;
        outFile<<" Income: "<<income<<" Profit: "<<profit<<endl;
        rent += rentIncrement;
    }
    outFile.close();
    cout <<"\nMaximum number of units to rent: "<<bestUnit<< endl;
    cout <<fixed << setprecision(2);
    cout <<"Maximum profit: $" <<maxProfit<<endl;
    return 0;
}
