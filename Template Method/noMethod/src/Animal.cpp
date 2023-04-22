#include "../headers/Animal.h"
#include <iostream>

#include "../headers/Player.h"
#include "../headers/Enemy.h"

Animal::Animal(const char* _name, int _life, int _res) {
    name = _name;
    life = _life;
    res = _res;
    std::cout << name << "'s health: " << life << "\n";
    std::cout << name << " has " << res  << " resistance." << "\n";
}
int Animal::resist() {
    return res;
}

void Animal::damagedBy(Entity* ent) {
    int dmg = ent->damage() - resist() + bonus();
    if (dmg < 1) {
        dmg = 1;
    }else if (dmg > life) {
        life = 0;
    } else {
        life -= dmg;
    }
    std::cout << ent->getName() << " attacked " << name << "\n";
    std::cout << name << "'s health: " << life << "\n";
}