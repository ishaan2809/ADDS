#include<iostream>
#include "Computer.h"
#include "Player.h"
#include "Human.h"
#include "Referee.h"

int main(){
    Human player1;
    Computer computer;
    Referee referee;
    Player * winner = referee.refGame(&player1, &computer);
    if (winner == nullptr) {
            std::cout << "It's a Tie" << std::endl;
        } else if (winner == &player1) {
            std::cout << " You win" << std::endl;
        } else {
            std::cout << "You lose" << std::endl;
        }



    }
