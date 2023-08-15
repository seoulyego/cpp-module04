#include "Cure.hpp"
#include <iostream>

Cure::Cure() {
	this->type = "cure";
}

Cure::Cure(std::string const& type) {
	this->type = type;
}

Cure::Cure(const Cure& object) {
	*this = object;
}

Cure&	Cure::operator=(const Cure& object) {
	if (this != &object)
		this->type = object.type;
	return *this;
}

Cure::~Cure() {
	std::cout << "Call " << this->type << " Destructor" << std::endl;
}

AMateria	*Cure::clone() const {
	return new Cure();
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
