#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap(void);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap(std::string name);
		
		~DiamondTrap(void);
		
		DiamondTrap&	operator=(const DiamondTrap &other);
		
		void	whoAmI(void);
		void	attack(std::string const &target);
};

#endif
