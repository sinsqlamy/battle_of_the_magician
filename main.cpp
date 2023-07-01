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

    // Логика завершения игры и объявления победителя
    if (player1.getHealth() <= 0 && player2.getHealth() <= 0) {
        std::cout << "Ничья!" << std::endl;
    }
    else if (player1.getHealth() <= 0) {
        std::cout << "Игрок 2 победил!" << std::endl;
    }
    else {
        std::cout << "Игрок 1 победил!" << std::endl;
    }

    return 0;
}
