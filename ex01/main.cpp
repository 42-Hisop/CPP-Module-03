#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clapTrap("Clapp");
	ScavTrap	scavTrap("Scavv");

	scavTrap.attack("random human");
	scavTrap.guardGate();
	scavTrap.takeDamage(30);
	scavTrap.beRepaired(10);
	scavTrap.takeDamage(50);
	scavTrap.takeDamage(30);
	scavTrap.attack("random human");
	scavTrap.beRepaired(10);
	scavTrap.attack("random human");
	return (0);
}
