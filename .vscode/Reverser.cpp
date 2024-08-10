#include <iostream>
#include <string>
using namespace std;

class Reverser {
public:
    
    int reverseDigit(int value) {
     
        if (value < 10) {
            return value;
        }
        
        int lastDigit = value % 10;
        int remainingDigits = value / 10;

        
        return lastDigit + reverseDigit(remainingDigits) * 10;
    }

    
    string reverseString(string characters) {
        
        if (characters.length() <= 1) {
            return characters;
        }
        
        return reverseString(characters.substr(1)) + characters[0];
    }
};


