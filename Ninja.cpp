#include "Ninja.h"



bool Ninja::beats(Move* other)  {
    return other->getName() == "Zombie" || other->getName() == "Pirate";
}
