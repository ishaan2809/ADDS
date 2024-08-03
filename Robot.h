#include"Rock.h"
#ifndef Robot_h
#define Robot_H
#include <string>



class Robot : public Move {
public:
    std::string getName()  { return "Robot"; }
    bool beats( Move* other); 
};
#endif
