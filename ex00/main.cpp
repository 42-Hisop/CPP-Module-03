#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	clapTrap1("ccccc");
	ClapTrap	clapTrap2("ttttt");
	ClapTrap	clapTrap3;

	clapTrap3 = clapTrap1;
	
	clapTrap2.attack("random human");
	
	clapTrap1.takeDamage(5);
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.takeDamage(5);
	clapTrap1.takeDamage(50);

	clapTrap2.attack("random human");
	clapTrap1.takeDamage(50);
	
	clapTrap1.beRepaired(0);
	clapTrap1.beRepaired(10);
	clapTrap1.attack("random human");
	clapTrap1.takeDamage(50);
	return (0);
}
