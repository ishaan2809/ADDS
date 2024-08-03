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
bool Rock::beats(Move* other){
    return other->getName() == "Scissors" || other->getName() == "Zombie";  
}

bool Paper::beats(Move* other){
    return other->getName() == "Rock" || other->getName() == "Robot";
}

bool Scissors::beats(Move* other) {
    return other->getName() == "Paper" || other->getName() == "Monkey";
}

bool Monkey::beats( Move* other){
    return other->getName() == "Pirate" || other->getName() == "Zombie";
}

bool Robot::beats( Move* other){
    return other->getName() == "Ninja" || other->getName() == "Monkey";
}

bool Pirate::beats(Move* other) {
    return other->getName() == "Ninja" || other->getName() == "Robot";
}

bool Ninja::beats(Move* other)  {
    return other->getName() == "Zombie" || other->getName() == "Scissors";
}

bool Zombie::beats(Move* other) {
    return other->getName() == "Rock" || other->getName() == "Paper";
}


