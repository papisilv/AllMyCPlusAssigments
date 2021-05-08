#include <iostream>
#include <string>
using namespace std;

int main() {
    int i, num;
    bool isPrime = true;
    char startAgain='y';
    string message;
    while(startAgain =='y' || startAgain == 'Y'){
        cout << "Enter a positive integer greater than 1: "<<flush ;
        cin >> num;
        isPrime=true;
        // 0 and 1 are not prime numbers
        if ( num == 1) {
            isPrime = false;
        }
        else {
            for (i = 2; i <= num / 2; ++i) {
                if (num % i == 0) {  
                    isPrime = false;
                }
            }
        }
        cout << "\nThe number you entered is: "<<num<<endl;
        if (isPrime)
            cout << num << " is a prime number"<<endl;
        else
            cout << num << " is not a prime number"<<endl;                     
        cout << "\nWould you like to continue? (y/n) ";
        cin >> startAgain;
    }  
    return 0;
}