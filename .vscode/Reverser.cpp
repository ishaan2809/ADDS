#include <iostream>
#include <string>

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

    
    std::string reverseString(std::string characters) {
        
        if (characters.length() <= 1) {
            return characters;
        }
        
        return reverseString(characters.substr(1)) + characters[0];
    }
};

int main() {
    Reverser r;
    // Test reverseDigit
    int reversedNumber = r.reverseDigit(12345);
    std::cout << "Reversed Number: " << reversedNumber << std::endl;  // Should print "54321"

    // Test reverseString
    std::string reversedString = r.reverseString("hello");
    std::cout << "Reversed String: " << reversedString << std::endl;  // Should print "olleh"

    return 0;
}

