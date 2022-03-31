#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		int	default_hitPoints;
		int	default_energyPoints;
		int	default_attackDamage;
		

	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const &src);
		ScavTrap(std::string name);
		
		~ScavTrap(void);
		
		ScavTrap&	operator=(const	ScavTrap &other);
		
		void	guardGate(void);
		void	attack(std::string const &target);
};

#endif
