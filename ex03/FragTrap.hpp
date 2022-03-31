#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected :
		int	default_hitPoints;
		int	default_energyPoints;
		int	default_attackDamage;

	public :
		FragTrap(void);
		FragTrap(FragTrap const &src);
		FragTrap(std::string name);
		
		~FragTrap(void);
		
		FragTrap&	operator=(const FragTrap &other);
		
		void	highFivesGuys(void);
};

#endif
