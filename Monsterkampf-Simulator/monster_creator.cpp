//
// Created by George on 14.03.2022.
//

#include <iostream>
#include "Monster.h"
#include "Monster_Creator.h"

Monster Monster_Creator::create_monster(){
    std::string name;
    int health;
    int damage;
    int defense;

    std::cout << "Name your monster" << std::endl;
    std::cin >> name;
    std::cout << "Specify your monsters health." << std::endl;
    std::cin >> health;
    std::cout << "Specify your monsters attack-damage." << std::endl;
    std::cin >> damage;
    std::cout << "Specify your monsters defense-value." << std::endl;
    std::cin >> defense;

    Monster myMonster (name, health, damage, defense);
    return myMonster;
}