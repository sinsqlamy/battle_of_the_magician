#include "SpellCard.h"

SpellCard::SpellCard(int manaCost) : manaCost(manaCost) {}

int SpellCard::getManaCost() const {
    return manaCost;
}

void SpellCard::applyEffects() {
    // Применение эффектов
    // ...
}
