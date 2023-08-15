#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource	{
	private:
		AMateria	*source[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& object);
		MateriaSource&	operator=(const MateriaSource& object);
		~MateriaSource();

		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const& type);
};

#endif  // MATERIASOURCE_HPP
