#include "Human.h"
using namespace std;
#include <iostream>
Human::Human():name("Human"){
}






Human::Human(string name) : name(name)
{
    
}

char Human::makeMove()
{
    char move;
    // std::cout<<"Enter move: ";
    std::cin>>move;
    return move;


    
}

string Human::getName()
{
    return name;
}
