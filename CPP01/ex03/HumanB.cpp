#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string &name)
: _name(name), _weapon(nullptr)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->_weapon = &newWeapon;
}

void	HumanB::attack()
{
	if (this->_weapon == nullptr)
	{
		std::cout << this->_name << " doesn't have a weapon." << std::endl;
		return;
	}
	std::cout << this->_name << " attack with their " << this->_weapon->getType() << "!" << std::endl;
}