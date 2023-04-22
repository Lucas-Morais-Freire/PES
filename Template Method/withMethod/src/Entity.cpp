#include "../headers/Entity.h"
#include <iostream>

int Entity::damage() {
    return 0;
}

int Entity::bonus() {
    return 0;
}

std::string Entity::getName() {
    return name;
}

void Entity::damagedBy(Entity* ent) {
    int dmg = ent->damage() - resist() + ent->bonus();
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
