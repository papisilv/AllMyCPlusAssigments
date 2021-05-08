#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

int main() {
    int i, j;
    for (i = 1; i <= 9; i++){
        for (j = 1; j <= (9 - i); j++){
            cout << "g";
        }   
        for (j = 1; j <= i; j++){
            cout << setw(1) << j;
        }
            
        for (j = (i - 1); j >= 1; j--){
            cout << setw(1) << j;
        }
            
    cout << endl;
    }

 return 0;
}