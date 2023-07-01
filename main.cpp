#include <iostream>
#include <vector>

class Player {
public:
    Player(int health, int mana) : health(health), mana(mana) {}

    int getHealth() const {
        return health;
    }

    int getMana() const {
        return mana;
    }

    void reduceHealth(int amount) {
        health -= amount;
    }

    void reduceMana(int amount) {
        mana -= amount;
    }

    // Дополнительные методы для работы с колодой карт и рукой игрока
    // ...

private:
    int health;
    int mana;
};

class SpellCard {
public:
    SpellCard(int manaCost) : manaCost(manaCost) {}

    int getManaCost() const {
        return manaCost;
    }

    // Метод для применения эффектов карты заклинания на существа или игроков
    void applyEffects() {
        // Применение эффектов
        // ...
    }

private:
    int manaCost;
};

class CreatureCard {
public:
    CreatureCard(int attack, int defense, int health) : attack(attack), defense(defense), health(health) {}

    int getAttack() const {
        return attack;
    }

    int getDefense() const {
        return defense;
    }

    int getHealth() const {
        return health;
    }

    // Методы для атаки, защиты и других действий существа
    void attack() {
        // Логика атаки существа
        // ...
    }

    void defend() {
        // Логика защиты существа
        // ...
    }

private:
    int attack;
    int defense;
    int health;
};

class Battlefield {
public:
    void addCreatureCard(const CreatureCard& card) {
        creatures.push_back(card);
    }

    // Методы для управления существами на поле боя
    // ...

private:
    std::vector<CreatureCard> creatures;
};

class GameEngine {
public:
    void startGame() {
        // Логика начала игры
        // ...
    }

    void playRound(Player& player1, Player& player2) {
        // Логика раунда игры
        // ...
    }

    // Дополнительные методы для обработки ходов, проверки условий победы и т.д.
    // ...
};

int main() {
    Player player1(20, 10);
    Player player2(20, 10);

    GameEngine gameEngine;
    gameEngine.startGame();

    while (player1.getHealth() > 0 && player2.getHealth() > 0) {
        gameEngine.playRound(player1, player2);
    }

    // Логика завершения игры и объявления победителя
    // ...

    return 0;
}
