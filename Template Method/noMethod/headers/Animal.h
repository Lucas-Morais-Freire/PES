#ifndef ANIMAL_H
#define ANIMAL_H

#include "Entity.h"

class Player; class Enemy;

class Animal : public Entity {
    private:
        int res;
    public:
        Animal(const char* _name, int _life, int _res);
        int resist();
        void damagedBy(Entity* ent);
};

#endif // ANIMAL_H