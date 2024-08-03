#include "Robot.h"


bool Robot::beats( Move* other){
    return other->getName() == "Ninja" || other->getName() == "Zombie";
}
