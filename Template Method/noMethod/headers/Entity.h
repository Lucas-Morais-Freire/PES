#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity {
    protected:
        std::string name;
        int life;
    public:
        std::string getName();
};

#endif // ENTITY_H