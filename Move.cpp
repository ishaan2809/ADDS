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
    return other->getName() == "Scissors";
}

bool Paper::beats(Move* other){
    return other->getName() == "Rock";
}

bool Scissors::beats(Move* other) {
    return other->getName() == "Paper";
}

bool Monkey::beats( Move* other){
    return other->getName() == "Ninja" || other->getName() == "Robot";
}

bool Robot::beats( Move* other){
    return other->getName() == "Ninja" || other->getName() == "Zombie";
}

bool Pirate::beats(Move* other) {
    return other->getName() == "Robot" || other->getName() == "Monkey";
}

bool Ninja::beats(Move* other)  {
    return other->getName() == "Zombie" || other->getName() == "Pirate";
}

bool Zombie::beats(Move* other) {
    return other->getName() == "Pirate" || other->getName() == "Monkey";
}


