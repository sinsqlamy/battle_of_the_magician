#include <iostream>
#include "Player.h"
#include "GameEngine.h"

int main() {
    Player player1(20, 10);
    Player player2(20, 10);

    GameEngine gameEngine;
    gameEngine.startGame();

    while (player1.getHealth() > 0 && player2.getHealth() > 0) {
        gameEngine.playRound(player1, player2);
    }

    // ������ ���������� ���� � ���������� ����������
    if (player1.getHealth() <= 0 && player2.getHealth() <= 0) {
        std::cout << "�����!" << std::endl;
    }
    else if (player1.getHealth() <= 0) {
        std::cout << "����� 2 �������!" << std::endl;
    }
    else {
        std::cout << "����� 1 �������!" << std::endl;
    }

    return 0;
}
