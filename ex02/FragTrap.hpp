#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private :

	public :
		FragTrap(void);
		FragTrap(FragTrap const &src);
		FragTrap(std::string name);
		
		~FragTrap(void);
		
		FragTrap&	operator=(const FragTrap &other);
		
		void	highFivesGuys(void);
//		void	FragTrap::attack(std::string const &target);	
};

#endif
