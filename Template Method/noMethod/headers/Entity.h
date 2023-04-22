#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity {
    protected:
        std::string name;
        int life;
    public:
        virtual void damagedBy(Entity* ent) = 0;
        virtual int resist() {
            return 0;
        }
        virtual int damage() {
            return 0;
        }
        virtual int bonus() {
            return 0;
        }
        std::string getName();
};

#endif // ENTITY_H