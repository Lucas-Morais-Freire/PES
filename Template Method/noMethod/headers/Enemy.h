#ifndef ENEMY_H
#define ENEMY_H

#include "Entity.h"

class Player;

class Enemy : public Entity {
    private:
        int dmg;
        int res;
    public:
        Enemy(const char* _name, int _life, int _dmg, int _res);
        int damage();
        int resist();
        void damagedBy(Entity* ent);
};

#endif // ENEMY_H