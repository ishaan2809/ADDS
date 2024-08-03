#include"Move.h"
#ifndef ROCK_H
#define ROCK_H
#include <string>


class Rock : public Move {
public:
    std::string getName(){ return "Rock"; }
    bool beats( Move* other) ;
};
#endif
