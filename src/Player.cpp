#include "Player.h"

Player::Player(int health, int mana) : health(health), mana(mana) {}

int Player::getHealth() const {
    return health;
}

int Player::getMana() const {
    return mana;
}

void Player::reduceHealth(int amount) {
    health -= amount;
}

void Player::reduceMana(int amount) {
    mana -= amount;
}

//TODO Дополнительные методы для работы с колодой карт и рукой игрока
    // ...
