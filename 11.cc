#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main() {
    int model;
    string output;
    
    cout << "Enter a model number of the TV you want to buy. The choice must be as 100 or 200 or 300 ...";
    cin >> model;
    cout << endl;

    if(model == 100){
      output = "Model 100: Remote control, timer, and stereo for $1000 \n";
    }
    else if (model == 200){
      output = "Model 200: Remote control, timer, and stereo and picture-in-picture, for $1200 \n";
    }
    else if(model == 300){
      output = "Model 300: Remote control, timer, and stereo and picture-in-picture,\nHDTV, flat screen, and a 16 x 9 aspect ratio, for $2400 \n";
    } else {
      output = "You have enter the wrong model number ... \n";
    }
    cout <<"The user has choosen the following TV:\n\n" << output;
    return 0;
}