#include "Human.h"
using namespace std;
#include <iostream>

Human::Human()
{
    this->name = "Human";
}

Human::Human(string name)
{
    this->name = name;
}

char Human::makeMove()
{
    char move;
    std::cout<<"Enter move: ";
    std::cin>>move;
    return move;


    
}

string Human::getName()
{
    return name;
}
