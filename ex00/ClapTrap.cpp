#include "ClapTrap.hpp"

void	ClapTrap::attack(std::string const &target)
{
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " don't have enough energy" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " attak " << target <<
			" causing " << this->_attackDamage << " points of damage!" <<  std::endl;
		this->_energyPoints -= 1;
		std::cout << "ClapTrap " << this->_name << " has " << this->_energyPoints << 
			" energy" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " take " << amount << " damage! " << std::endl;
		if ((int)amount > _hitPoints)
			_hitPoints = 0;
		else
			_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << " has " << this->_hitPoints <<
			" hitPoints" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " don't have enough energy" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " repairs itself, get " << amount << 
			" hit points" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
		std::cout << "ClapTrap " << this->_name << " has " << this->_energyPoints << 
			" energy" << std::endl;
	}
}


ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(void) : _name("claptrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Defalut constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}


ClapTrap&	ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}


