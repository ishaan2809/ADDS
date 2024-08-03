// #include "Computer.h"
// #include "Rock.h"

// // Computer::Computer() : name("Computer") {}

// // Move *Computer::makeMove() 
// // {
// //    return new Rock();
// // }


// // std::string Computer::getName()
// // {
// //     return name;
// // }

#include "Computer.h"
#include <cstdlib>  // For rand()
#include <ctime>    // For time()
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

Computer::Computer() : name("Computer") {
    std::srand(std::time(nullptr));  // Seed the random number generator
}

Move* Computer::makeMove(){
    int choice = std::rand() % 8;  // Randomly choose a number between 0 and 7
    switch (choice) {
        case 0: return new Rock();
        case 1: return new Paper();
        case 2: return new Scissors();
        case 3: return new Monkey();
        case 4: return new Robot();
        case 5: return new Pirate();
        case 6: return new Ninja();
        case 7: return new Zombie();
        default: return new Rock();  // Default case
    }
}

std::string Computer::getName() {
    return name;
}

