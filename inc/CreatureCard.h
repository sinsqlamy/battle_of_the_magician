#ifndef CREATURECARD_H
#define CREATURECARD_H

class CreatureCard {
public:
    CreatureCard(int attack, int defense, int health);

    int getAttack() const;
    int getDefense() const;
    int getHealth() const;
    void attack();
    void defend();

private:
    int attack;
    int defense;
    int health;
};

#endif  // CREATURECARD_H
