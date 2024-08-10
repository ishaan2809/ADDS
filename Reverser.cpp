#include <iostream>
#include <string>
#include "Reverser.h"    
    int Reverser::reverseDigit(int value) {
     
        if (value < 10) {
            return value;
        }
        
        int lastDigit = value % 10;
        int remainingDigits = value / 10;

        
        return lastDigit + reverseDigit(remainingDigits) * 10;
    }

    
    std::string Reverser::reverseString(std::string characters) {
        
        if (characters.length() <= 1) {
            return characters;
        }
        
        return reverseString(characters.substr(1)) + characters[0];
    }

