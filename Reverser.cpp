#include <iostream>
#include <string>
#include "Reverser.h"
#include <cmath> 
    int Reverser::reverseDigit(int value) {

        if(value<0){
            return-1;
        }
     
        if (value < 10) {
            return value;
        }

        
        int lastDigit = value % 10;
        int remainingDigits = value / 10;
        int power = log10(value);

        int reversedRemainingDigits = reverseDigit(remainingDigits);
        return lastDigit *pow(10, power) + reversedRemainingDigits ;
    }

    
    std::string Reverser::reverseString(std::string characters) {

         if (characters.empty()){
        return "ERROR";
         }
        
        if (characters.length() <= 1) {
            return characters;
        }
        
        return reverseString(characters.substr(1)) + characters[0];
    }

    
