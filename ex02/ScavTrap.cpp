#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " guardGate on" << std::endl;
	return ;
}

void	ScavTrap::attack(std::string const &target)
{
	if (this->_hitPoints == 0)
		std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
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
	std::cout << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_name = "SCAVTRAP";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

