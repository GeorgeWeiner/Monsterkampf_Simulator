//
// Created by George on 14.03.2022.
//


#include <iostream>
#include <unistd.h>
#include "Monster_Fight.h"

void Monster_Fight::fight(Monster monsterOne, Monster monsterTwo) { // NOLINT(misc-no-recursion)
    print_fight_data(monsterOne, monsterTwo);

    monsterOne.attack(monsterTwo);
    monsterTwo.attack(monsterOne);

    sleep(1);

    if (monsterOne.monsterHealth > 0 && monsterTwo.monsterHealth > 0){
        fight(monsterOne, monsterTwo);
    }
    else {
        print_fight_data(monsterOne, monsterTwo);

        if (monsterOne.monsterHealth > monsterTwo.monsterHealth){
            std::cout << monsterOne.monsterName + " wins!";
        }
        else if (monsterOne.monsterHealth == monsterTwo.monsterHealth){
            std::cout << "It's a tie!";
        }
        else {
            std::cout << monsterTwo.monsterName + " wins!";
        }
    }
}

void Monster_Fight::print_fight_data(const Monster& monsterOne, const Monster& monsterTwo) {
    std::cout << monsterOne.monsterName + " health " + std::to_string(monsterOne.monsterHealth) << std::endl;
    std::cout << monsterTwo.monsterName + " health " + std::to_string(monsterTwo.monsterHealth) << std::endl;
}

