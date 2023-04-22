#include "../headers/Enemy.h"
#include <iostream>

#include "../headers/Player.h"

Enemy::Enemy(const char* _name, int _life, int _dmg, int _res) {
    name = _name;
    life = _life;
    dmg = _dmg;
    res = _res;
    std::cout << name << "'s health: " << life << "\n";
    std::cout << name << " has " << dmg  << " damage." << "\n";
    std::cout << name << " has " << res  << " resistance." << "\n";
}
int Enemy::damage() {
    return dmg;
}
int Enemy::resist() {
    return res;
}

void Enemy::damagedBy(Player* ent) {
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