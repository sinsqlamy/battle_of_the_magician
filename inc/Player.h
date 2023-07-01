#ifndef PLAYER_H
#define PLAYER_H

class Player {
public:
    Player(int health, int mana);

    int getHealth() const;
    int getMana() const;
    void reduceHealth(int amount);
    void reduceMana(int amount);

    // �������������� ������ ��� ������ � ������� ���� � ����� ������
    // ...

private:
    int health;
    int mana;
};

#endif  // PLAYER_H
