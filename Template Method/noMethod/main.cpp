#include <iostream>
#include <cstdlib>

#include "headers/Player.h"
#include "headers/Enemy.h"
#include "headers/Animal.h"

int main() {
    Player* player = new Player("Andre");
    player->gotWeapon(5, 20);
    player->gotArmor(20);
    Enemy* goblin1 = new Enemy("goblin1", 30, 30, 1);
    player->damagedBy(goblin1);
    goblin1->damagedBy(player);
    // Animal* boar1 = new Animal("boar1", 20, 5);
    // boar1->damagedBy(player);
    // boar1->damagedBy(goblin1);
    // delete boar1;
    delete player;
    delete goblin1;

    return 0;
}