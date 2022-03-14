//
// Created by George on 14.03.2022.
//

#ifndef CPLUSPLUSPRACTICE_MONSTER_FIGHT_H
#define CPLUSPLUSPRACTICE_MONSTER_FIGHT_H

#include "Monster.h"


class Monster_Fight {
public:
    static void fight(Monster monsterOne, Monster monsterTwo);

private:
    static void print_fight_data(const Monster& monsterOne, const Monster& monsterTwo);
};


#endif //CPLUSPLUSPRACTICE_MONSTER_FIGHT_H
