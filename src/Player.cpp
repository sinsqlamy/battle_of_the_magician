#include "Player.h"

Player::Player(int health, int mana) : health(health), mana(mana) {}

int Player::getHealth() const {
    return health;
}

int Player::getMana() const {
    return mana;
}

int Player::getRemainingMana() const {
    // Расчет оставшегося количества маны
    int usedMana = 0;
    for (const auto& card : hand) {
        usedMana += card.getManaCost();
    }
    return mana - usedMana;
}

void Player::reduceHealth(int amount) {
    health -= amount;
}

void Player::reduceMana(int amount) {
    mana -= amount;
}

void Player::drawCard() {
    // Тянуть карту из колоды и добавить в руку
    // ...
}

void Player::playSpellCard(const SpellCard& card) {
    // Разыграть карту заклинания и применить эффекты
    // ...
}

void Player::playCreatureCard(const CreatureCard& card) {
    // Разыграть карту существа и разместить на поле боя
    // ...
}

void Player::refillMana() {
    // Пополнить очки маны
    // ...
}
