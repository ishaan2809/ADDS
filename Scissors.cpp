#include "Scissors.h"



bool Scissors::beats(Move* other)  {
    return other->getName() == "Paper";
}