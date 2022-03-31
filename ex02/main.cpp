#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	fragTrap("Fragg");
	
	fragTrap.attack("random");
	fragTrap.highFivesGuys();
	fragTrap.takeDamage(50);
	fragTrap.beRepaired(30);
	fragTrap.takeDamage(80);
	fragTrap.attack("random human");
	return (0);
}
