#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		this->source[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource& object) {
	*this = object;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& object) {
	if (this != &object) {
		for (int i = 0; i < 4; i++)
			this->source[i] = object.source[i];
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "Call MateriaSource Destructor" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->source[i] != 0) {
			delete this->source[i];
			this->source[i] = 0;
		}
	}
}

void	MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->source[i] == 0) {
			this->source[i] = m;
			return ;
		}
	}
	delete m;
}

AMateria	*MateriaSource::createMateria(std::string const& type) {
	if (type == "ice")
		return new Ice();
	else if (type == "cure")
		return new Cure();
	else
		return 0;
}
