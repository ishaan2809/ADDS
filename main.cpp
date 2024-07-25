#include<iostream>
#include "Computer.h"
#include "Player.h"
#include "Human.h"
#include "Referee.h"

int main(){
    Human player1;
    Human player2("Wei");
    Computer computer;
    Referee referee;
    Player * winner = referee.refGame(&player2, &computer);
    if(winner == nullptr){
        std::cout<<"It's a Tie"<< std::endl;
    }
        else{
            std::cout<< winner->getName() << "You win"<< std::endl;
        }
        return 0;



    }
