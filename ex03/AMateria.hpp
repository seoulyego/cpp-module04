#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria	{
	protected:
		std::string	type;

	public:
		AMateria();
		AMateria(std::string const& type);
		AMateria(const AMateria& object);
		AMateria&	operator=(const AMateria& object);
		virtual ~AMateria();

		std::string const&	getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif  // AMATERIA_HPP
