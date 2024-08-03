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

Human::Human():name("Human"){
}






Human::Human(std::string name) : name(name)
{
    
}


 Move* Human::makeMove()
{
    std::string moveName;
    std::cout<<"Enter move: ";
    std::cin>>moveName;
    if (moveName == "Rock") {
        return new Rock();
    } else if (moveName == "Paper") {
        return new Paper();
    } else if (moveName == "Scissors") {
        return new Scissors();
    } else if (moveName == "Monkey") {
        return new Monkey();
    } else if (moveName == "Robot") {
        return new Robot();
    } else if (moveName == "Pirate") {
        return new Pirate();
    } else if (moveName == "Ninja") {
        return new Ninja();
    } else if (moveName == "Zombie") {
        return new Zombie();
    } else {
        std::cout << "Invalid move" << std::endl;
        return new Rock();
    }



    
}

std::string Human::getName()
{
    return name;
}
