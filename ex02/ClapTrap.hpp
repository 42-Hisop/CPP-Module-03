#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;

	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const &src);
		ClapTrap(std::string name);
		
		~ClapTrap(void);
		
		ClapTrap&	operator=(ClapTrap const &other);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int	amount);
};

#endif
