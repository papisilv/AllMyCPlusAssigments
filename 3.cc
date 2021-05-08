#include <iostream>
#include <string>
using namespace std;
// This is For loops etc..
// g++ -o app2 2.cc


int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while (secretNum != guess && !outOfGuesses){
        if (guessCount < guessLimit){
            cout << "Enter guess: ";
            cin >> guess ;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }
    if(outOfGuesses){
        cout << "you lost";
    } else {
        cout << "you won!!";
    }
    
    return 0;
}