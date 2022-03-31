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
		std::cout << "ScavTrap " << this->_name << " don't have enough energy" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << " attak " << target <<
			" causing " << this->_attackDamage << " points of damage!" <<  std::endl;
		this->_energyPoints -= 1;
		std::cout << "ScavTrap " << this->_name << " has " << this->_energyPoints <<
			" energy" << std::endl;
	}
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

ScavTrap::ScavTrap(void) 
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_name = "SCAVTRAP";
	default_hitPoints = 100;
	default_energyPoints = 50;
	default_attackDamage = 20;
	this->_hitPoints = default_hitPoints;
	this->_energyPoints = default_energyPoints;
	this->_attackDamage = default_attackDamage;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Name constructor called" << std::endl;
	this->_name = name;
	default_hitPoints = 100;
	default_energyPoints = 50;
	default_attackDamage = 20;
	this->_hitPoints = default_hitPoints;
	this->_energyPoints = default_energyPoints;
	this->_attackDamage = default_attackDamage;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

