#include "DiamondTrap.hpp"

int main (void)
{
	DiamondTrap diamondy("Diamondd");
	FragTrap frag("FRAG");

	frag.attack("HI");

	diamondy.takeDamage(20);
	diamondy.attack("random human");
	diamondy.beRepaired(30);
	diamondy.whoAmI();
	return (0);
}
