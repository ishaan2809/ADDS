#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Move.h"
#include <string>
class Zombie : public Move {
public:
    std::string getName()  { return "Zombie"; }
    bool beats( Move* other) ;
};
#endif
