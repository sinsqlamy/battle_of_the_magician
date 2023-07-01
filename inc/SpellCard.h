#ifndef SPELLCARD_H
#define SPELLCARD_H

class SpellCard {
public:
    SpellCard(int manaCost);

    int getManaCost() const;
    void applyEffects();

private:
    int manaCost;
};

#endif  // SPELLCARD_H
