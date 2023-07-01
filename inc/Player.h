#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "SpellCard.h"
#include "CreatureCard.h"

class Player {
public:
    Player(int health, int mana);

    int getHealth() const;
    int getMana() const;
    int getRemainingMana() const;

    void reduceHealth(int amount);
    void reduceMana(int amount);

    void drawCard();
    void playSpellCard(const SpellCard& card);
    void playCreatureCard(const CreatureCard& card);

private:
    int health;
    int mana;
    std::vector<SpellCard> spellDeck;
    std::vector<CreatureCard> creatureDeck;
    std::vector<SpellCard> hand;
    std::vector<CreatureCard> battlefield;

    void refillMana();
};

#endif // PLAYER_H
