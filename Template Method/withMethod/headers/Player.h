#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"

class Player : public Entity {
    private:
        int level;
        int baseDmg;
        int weaponDmg;
        int critRate;
        int res;
        int armor;
    public:
        Player(const char* _name);
        void gotWeapon(int _weaponDmg, int _critRate);
        void gotArmor(int _armor);
        void levelUp();
        int damage();
        int resist();
        int bonus();
};

#endif // PLAYER_H