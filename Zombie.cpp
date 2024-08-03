#include "Zombie.h"


bool Zombie::beats(Move* other) {
    return other->getName() == "Pirate" || other->getName() == "Monkey";
}