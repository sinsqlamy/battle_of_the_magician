#ifndef BATTLEFIELD_H
#define BATTLEFIELD_H

#include <vector>
#include "CreatureCard.h"

class Battlefield {
public:
    void addCreatureCard(const CreatureCard& card);

    // ������ ��� ���������� ���������� �� ���� ���
    // ...

private:
    std::vector<CreatureCard> creatures;
};

#endif  // BATTLEFIELD_H
