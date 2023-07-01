#ifndef PLAYER_H
#define PLAYER_H

class Player {
public:
    Player(int health, int mana);

    int getHealth() const;
    int getMana() const;
    void reduceHealth(int amount);
    void reduceMana(int amount);

    // Дополнительные методы для работы с колодой карт и рукой игрока
    // ...

private:
    int health;
    int mana;
};

#endif  // PLAYER_H
