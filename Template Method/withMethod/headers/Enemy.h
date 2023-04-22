#ifndef ENEMY_H
#define ENEMY_H

#include "Entity.h"

class Enemy : public Entity {
    private:
        int dmg;
        int res;
    public:
        Enemy(const char* _name, int _life, int _dmg, int _res);
        int damage();
        int resist();
};

#endif // ENEMY_H