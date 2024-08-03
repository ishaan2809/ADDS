#include "Pirate.h"

bool Pirate::beats(Move* other) {
    return other->getName() == "Robot" || other->getName() == "Monkey";
}
