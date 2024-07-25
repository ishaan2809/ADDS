#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include <string>
class Computer : public Player{
    private:
    std::string name;
    
    public:
    char makeMove();
    std::string getName();


};
#endif