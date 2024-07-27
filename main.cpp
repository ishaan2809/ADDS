#include<iostream>
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

int main(){
    Human player1("Human");
    Computer computer;
    Referee referee;
    Player * winner = referee.refGame(&player1, &computer);
    if (winner == nullptr) {
            std::cout << "Tie" << std::endl;
        } else if (winner == &player1) {
            std::cout << winner->getName() << "You win" << std::endl;
        } else {
            std::cout << "You lose" << std::endl;
        }
        return 0;
}




    
