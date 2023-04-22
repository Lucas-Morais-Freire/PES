#include "../headers/Animal.h"
#include <iostream>

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