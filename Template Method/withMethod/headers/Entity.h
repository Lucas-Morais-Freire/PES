#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity {
    protected:
        std::string name;
        int life;
    public:
        virtual int resist() = 0;
        virtual int damage();
        virtual int bonus();
        std::string getName();
        void damagedBy(Entity* ent);
};

#endif // ENTITY_H