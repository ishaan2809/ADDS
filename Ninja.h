#ifndef NINJA_H
#define NINJA_H
#include "Move.h"
#include <string>


class Ninja : public Move {
public:
    std::string getName()   { return "Ninja"; }
    bool beats( Move* other) ;  
};
#endif