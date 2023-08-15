#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria() {
	this->type = "default";
}

AMateria::AMateria(std::string const& type) {
	this->type = type;
}

AMateria::AMateria(const AMateria& object) {
	*this = object;
}

AMateria&	AMateria::operator=(const AMateria& object) {
	if (this != &object)
		this->type = object.type;
	return *this;
}

AMateria::~AMateria() {
	std::cout << "Call " << this->type << " AM Destructor" << std::endl;
}

std::string const&	AMateria::getType() const {
	return this->type;
}

void	AMateria::use(ICharacter& target) {
	if (this->type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->type == "cure")
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
