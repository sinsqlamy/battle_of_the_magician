#include "Player.h"

Player::Player(int health, int mana) : health(health), mana(mana) {}

int Player::getHealth() const {
    return health;
}

int Player::getMana() const {
    return mana;
}

int Player::getRemainingMana() const {
    // ������ ����������� ���������� ����
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
    // ������ ����� �� ������ � �������� � ����
    // ...
}

void Player::playSpellCard(const SpellCard& card) {
    // ��������� ����� ���������� � ��������� �������
    // ...
}

void Player::playCreatureCard(const CreatureCard& card) {
    // ��������� ����� �������� � ���������� �� ���� ���
    // ...
}

void Player::refillMana() {
    // ��������� ���� ����
    // ...
}
