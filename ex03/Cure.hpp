#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria	{
	public:
		Cure();
		Cure(std::string const& type);
		Cure(const Cure& object);
		Cure&	operator=(const Cure& object);
		~Cure();

		AMateria	*clone() const;
		void		use(ICharacter& target);
};

#endif  // CURE_HPP
