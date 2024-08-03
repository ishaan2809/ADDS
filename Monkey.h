#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"
#include <string>


class Monkey : public Move {
public:
    std::string getName(){ return "Monkey"; }
    bool beats( Move* other);
};

#endif