#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"
#include <string>


class Scissors : public Move {
public:
    std::string getName(){ return "Scissors"; }
    bool beats( Move* other);
};

#endif