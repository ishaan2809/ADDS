#include<iostream>
#include "Move.h"
#include "Human.h"
#include <iostream>
#include <string>
#include "Referee.h"
#include "Computer.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
#include <iostream>

int main() {
    Move* move1 = new Rock();  // Create a Rock move
    Move* move2 = new Scissors();  // Create a Scissors move

    // Check if Rock beats Scissors
    if (move1->beats(move2)) {
        std::cout << "Rock beats Scissors" << std::endl;
    } else {
        std::cout << "Rock does not beat Scissors" << std::endl;
    }

    // Clean up memory
    delete move1;
    delete move2;

    return 0;
}




    
