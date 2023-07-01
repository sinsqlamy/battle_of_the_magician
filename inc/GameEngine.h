#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "Player.h"
#include "Battlefield.h"

class GameEngine {
public:
    void startGame();
    void playRound(Player& player1, Player& player2);

    // �������������� ������ ��� ��������� �����, �������� ������� ������ � �.�.
    // ...
};

#endif  // GAMEENGINE_H
