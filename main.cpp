

#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main() {

// variable declaration 
    int c = 0;
    int userInput = 0;
    int userArray1[3] = {0, 0, 0};
    string programDone = "yes";

    bool colorInvalid = false;


    cout << "Hello, this program will determine whether or not your desired color(s) are tritanopia color blind friendly. " << endl;
    while(programDone == "yes"){
    //Array data input
        cout << "please enter a RGB color code. " << endl;
        colorInvalid = false;
        while (c <= 2) {
            cin >> userInput;
            userArray1[c] = userInput;
            c++;          
        }
        // Evaluates user color to see if it falls within a given range for each RGB value
        c = 0;
        if(userArray1[0] >=212 && userArray1[0] <= 255 && userArray1[1] >= 182 && userArray1[1] <= 255 && userArray1[2] >= 0 && userArray1[2] <= 193){
             cout << "Your color is hard for tritinopia color bling indiduvals to distinguish, plesase try another color. "<< endl;
             colorInvalid = true;

        }else if(userArray1[0] >=0 && userArray1[0] <= 40 && userArray1[1] >= 211 && userArray1[1] <= 255 && userArray1[2] >= 211 && userArray1[2] <= 255){
             cout << "Your color is hard for tritinopia color bling indiduvals to distinguish, plesase try another color. "<< endl;
             colorInvalid = true;       
        
        }else if(userArray1[0] >=128 && userArray1[0] <= 139 && userArray1[1] >= 0&& userArray1[1] <= 20 && userArray1[2] >= 0 && userArray1[2] <= 128){
             cout << "Your color is hard for tritinopia color bling indiduvals to distinguish, plesase try another color. "<< endl;
             colorInvalid = true;

        }else{
            colorInvalid = false;
        }
       
    // if the color passes all if and elif checks  for any of the ranges then colorInvalid is set to true and triggers this if statement
    if(colorInvalid == false){
        cout << "Your color is Tritinopia friendly" << endl;
    }
        // asks the user if they want to evaluate another color and if yes it loops back to the top. 
        //If any other data is inputed it ends the program
        cout << "Would you like to evaulate antoher color?  (yes/no)" << endl;
        cin >> programDone;
    

    }

    return 0;
}
