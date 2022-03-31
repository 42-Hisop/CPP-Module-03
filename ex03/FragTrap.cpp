#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " highfive Guys!" << std::endl;
	return ;
}

FragTrap&	FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_name = "FRAGTRAP";
	default_hitPoints = 100;
	default_energyPoints = 100;
	default_attackDamage = 30;
	this->_hitPoints = default_hitPoints;
	this->_energyPoints = default_energyPoints;
	this->_attackDamage = default_attackDamage;
	return ;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap Name constructor called" << std::endl;
	this->_name = name;
	default_hitPoints = 100;
	default_energyPoints = 100;
	default_attackDamage = 30;
	this->_hitPoints = default_hitPoints;
	this->_energyPoints = default_energyPoints;
	this->_attackDamage = default_attackDamage;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}

