#include <iostream> 
#include <string>
#include <fstream>
using namespace std;

int main(){
const int freezzingPointWater = 32;
const int freezzingPointMercury = -38;
const int freezzingPointEthyl = -173;
const int freezzingPointOxygen = -362;

const int boilingPointOxygen = -306;
const int boilingPointEthyl = 172;
const int boilingPointWater = 212;
const int boilingPointMercury = 676;

bool isAndNeeded = true;
double temperature;

ifstream in ("what.txt");
ofstream out ("temperature.txt");

cout << "Enter a temperature" << endl;
in >> temperature;

cout << "================================================\n";
out <<"================================================\n";
cout <<"At " <<temperature << "\370" <<"F ";
out <<"At " <<temperature << "º" <<"F ";

if(temperature <= freezzingPointWater){
    cout << "Water";
    out<<"Water";
    if(temperature <= freezzingPointMercury ){
        cout << ", Mercury";
        out <<", Mercury";
        if(temperature <= freezzingPointEthyl){
            cout << ", Ethyl";
            out <<", Ethyl";
            if(temperature <= freezzingPointOxygen){
                cout << ", Oxygen";
                out <<", Oxygen";
            }
        }
    }
    cout << " will Freeze ";
    out <<" will Freeze ";
}
if(temperature <=-307){
    isAndNeeded = false;
}
if(temperature <= 32 && isAndNeeded == true){
    cout << "& ";
    out <<"& ";
}
if(temperature >= boilingPointOxygen){
    cout << "Oxygen";
    out <<"Oxygen";
    if(temperature >= boilingPointEthyl ){
        cout << ", Ethyl";
        out <<", Ethyl";
        if(temperature >= boilingPointWater){
            cout << ", Water";
            out <<", Water";
            if(temperature >= boilingPointMercury){
                cout << ", Mercury";
                out <<", Mercury";
            }
        }
    }
    cout << " will Boil ";
    out <<" will Boil ";
}
in.close();
out.close();
return 0;
}
