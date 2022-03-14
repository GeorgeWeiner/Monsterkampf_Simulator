#include "Monster.h"
#include "Monster_Fight.h"
#include "Monster_Creator.h"

int main() {
    Monster monsterOne = Monster_Creator::create_monster();
    Monster monsterTwo = Monster_Creator::create_monster();

    Monster_Fight::fight(monsterOne, monsterTwo); //This works because it has been declared as a static function.

    return 0;
}

