#ifndef MOVE_H
#define MOVE_H
#include <string>

class Move{
    public:
    virtual std::string getName()=0;
    virtual bool beats(Move*other)=0;






    
};
#endif