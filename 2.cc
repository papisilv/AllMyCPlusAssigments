#include <iostream>
#include <string>
using namespace std;
// This is For Arrays etc..
// g++ -o app2 2.cc

void aFunction(string name){
    cout << "Mr "<< name;
}

int main()
{
    int varArray[3] = {4,5,6};
    cout << "My favorite number is "<<varArray[2]<< endl;
    cout << "Whats up ";
    aFunction("Dude");
    return 0;
}