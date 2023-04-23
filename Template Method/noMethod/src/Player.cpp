#include "../headers/Player.h"
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <random>

Player::Player(const char* _name) {
    name = _name;
    level = 1;
    life = 100;
    baseDmg = 5;
    weaponDmg = 0;
    res = 0;
    armor = 0;
    critRate = 5;
    std::cout << name << "'s health: " << life << "\n";
}

void Player::gotWeapon(int _weaponDmg, int _critRate) {
    weaponDmg = _weaponDmg;
    critRate = _critRate;
    std::cout << name << " now has " << weaponDmg + baseDmg  << " damage." << "\n";
}

void Player::gotArmor(int _armor) {
    armor = _armor;
    std::cout << name << " now has " << res + armor  << " resistance." << "\n";
}

void Player::levelUp() {
    level++;
    baseDmg += 5;
    res += 5;
    std::cout << name << " is now level " << level << "\n";
    std::cout << name << " now has " << weaponDmg + baseDmg  << " damage." << "\n";
    std::cout << name << " now has " << res + armor  << " resistance." << "\n";
}

int Player::damage() {
    return baseDmg + weaponDmg;
}

int Player::resist() {
    return armor + res;
}

int Player::bonus() {
    std::mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> dist(1, 100);
    if (dist(rng) < critRate) {
        return 2*(baseDmg + weaponDmg);
    }
    else {
        return 0;
    }
}

void Player::damagedBy(Entity* ent) {
    int dmg = ent->damage() - resist() + ent->bonus();
    if (dmg < 1) {
        dmg = 1;
    }
    if (dmg > life) {
        life = 0;
    } else {
        life -= dmg;
    }
    std::cout << ent->getName() << " attacked " << name << "\n";
    std::cout << name << "'s health: " << life << "\n";
}