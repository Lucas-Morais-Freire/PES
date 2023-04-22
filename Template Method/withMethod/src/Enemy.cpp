#include "../headers/Enemy.h"
#include <iostream>

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