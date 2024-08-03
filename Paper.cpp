#include "Paper.h"



bool Paper::beats( Move* other)  {
    return other->getName() == "Rock";
}