#include "Referee.h"

// Referee::Referee()
// {
// }

Player *Referee::refGame(Player *player1, Player *player2)
{
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();
    
    if (move1->getName() == move2->getName()) {
        delete move1;
        delete move2;
        return nullptr;
        
    } else if (move1->beats(move2)) {
        delete move1;
        delete move2;
        return player1;
    } else {
        delete move1;
        delete move2;
        return player2;
    }
}