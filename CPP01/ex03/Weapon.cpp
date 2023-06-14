#include "Weapon.hpp"

Weapon::Weapon(){
}

Weapon::~Weapon(){
}

void    setType(std::string type)
{
    this->type = type;
}

const std::string& getType()
{
    return this->type;
}