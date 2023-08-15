#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria	{
	public:
		Ice();
		Ice(std::string const& type);
		Ice(const Ice& object);
		Ice&	operator=(const Ice& object);
		~Ice();

		AMateria	*clone() const;
		void		use(ICharacter& target);
};

#endif  // ICE_HPP
