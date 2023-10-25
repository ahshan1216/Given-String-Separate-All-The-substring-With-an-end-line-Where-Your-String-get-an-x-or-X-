#include <iostream>
#include <string>

using namespace std; // Make the std namespace the default

int main() {
    string inputString = "hexlloXwXorld";
    size_t xPos = inputString.find_first_of("Xx");
    size_t lastPos = 0;
//cout<<xPos; xpos=7 , lastpos 6
    while (xPos != string::npos) {
        if (inputString[xPos] == 'X' || inputString[xPos] == 'x')
        {
        cout << inputString.substr(lastPos, xPos - lastPos) << endl;
        }
        lastPos = xPos + 1;
        xPos = inputString.find_first_of("Xx", lastPos);
    }

    cout << inputString.substr(lastPos) << endl;
      

    return 0;
}
