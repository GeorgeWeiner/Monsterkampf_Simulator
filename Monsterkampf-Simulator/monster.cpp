//
// Created by George on 14.03.2022.
//

#include <string>
#include <utility>
#include "Monster.h"

using namespace std;

Monster::Monster(string name, int health, int attack, int defense){
    monsterName = std::move(name);
    monsterHealth = health;
    monsterAttack = attack;
    monsterDefense = defense;
}

void Monster::attack(Monster &target) const{
    target.monsterHealth -= monsterAttack - target.monsterDefense;
}
