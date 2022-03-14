//
// Created by George on 14.03.2022.
//

#ifndef CPLUSPLUSPRACTICE_MONSTER_H
#define CPLUSPLUSPRACTICE_MONSTER_H

#include <string>


class Monster {
public:
    std::string monsterName;
    int monsterHealth;
    int monsterAttack;
    int monsterDefense;

    Monster(std::string name, int health, int damage, int defense);
    void attack(Monster &target) const;
};


#endif //CPLUSPLUSPRACTICE_MONSTER_H
