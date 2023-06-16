#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
	: _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA_attack()
{
	std::cout << this->_name << "attacks with his " << this->_weapon << std::endl;
}