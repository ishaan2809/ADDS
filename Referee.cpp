#include "Referee.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    char move1 = player1->makeMove();
    char move2 = player2->makeMove();

    if (move1 == move2) {
        return nullptr;
    } else {
        switch (move1) {
            case 'R':
                switch (move2) {
                    case 'P': return player2;
                    case 'S': return player1;
                }
                break;
            case 'P':
                switch (move2) {
                    case 'R': return player1;
                    case 'S': return player2;
                }
                break;
            case 'S':
                switch (move2) {
                    case 'R': return player2;
                    case 'P': return player1;
                }
                break;
        }
    }
    
   
    return nullptr;
}
