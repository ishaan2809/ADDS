#include "Monkey.h"


bool Monkey::beats( Move* other){
    return other->getName() == "Ninja" || other->getName() == "Robot";
}