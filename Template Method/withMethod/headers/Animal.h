#ifndef ANIMAL_H
#define ANIMAL_H

#include "Entity.h"

class Animal : public Entity {
    private:
        int res;
    public:
        Animal(const char* _name, int _life, int _res);
        int resist();
};

#endif // ANIMAL_H