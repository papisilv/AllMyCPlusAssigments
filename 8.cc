#include <iostream> 
#include <cmath>  
#include <string>
#include <iomanip>
using namespace std;

int main()
{
double first, second;
int temp;
string message;
first = 2.5;
second = 4.0;
cout << fixed << showpoint << setprecision(2);
cout << (pow(first, second)) << endl; // 32
cout << (pow(second, first)) << endl; // 39.0625
temp = static_cast<int>(pow(second, 1.5));
cout << temp << endl;
cout << sqrt(56.25) << endl;
cout << static_cast<int>(sqrt(pow(first, temp))) << endl;
message = "Predefined functions simplify programming code!";
cout << "Length of message = " << message.length() << endl;
return 0;
}
