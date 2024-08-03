#include "Rock.h"



bool Rock::beats( Move* other){
    return other->getName() == "Scissors";
}
