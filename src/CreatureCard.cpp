#include "CreatureCard.h"

CreatureCard::CreatureCard(int attack, int defense, int health)
    : attack(attack), defense(defense), health(health) {}

int CreatureCard::getAttack() const {
    return attack;
}

int CreatureCard::getDefense() const {
    return defense;
}

int CreatureCard::getHealth() const {
    return health;
}

void CreatureCard::attack() {
    // Логика атаки существа
    // ...
}

void CreatureCard::defend() {
    // Логика защиты существа
    // ...
}
