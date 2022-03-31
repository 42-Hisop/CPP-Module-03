#include "DiamondTrap.hpp"

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name << " ,my ClapTrap name is " << 
		ClapTrap::_name << std::endl;
	return ;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "Assignation operator called" << std::endl;
	ClapTrap::operator=(other);
	return *this;
}

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->_name = "default";
	this->ClapTrap::_name = "default_clap_name";
	this->_hitPoints = FragTrap::default_hitPoints;
	this->_energyPoints = ScavTrap::default_energyPoints;
	this->_attackDamage = FragTrap::default_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap Name constructor called" << std::endl;
	this->_name = name;
	this->ClapTrap::_name = (name + "_clap_name");
	this->_hitPoints = FragTrap::default_hitPoints;
	this->_energyPoints = ScavTrap::default_energyPoints;
	this->_attackDamage = FragTrap::default_attackDamage;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
	return ;
}
