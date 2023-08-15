#include "Ice.hpp"
#include <iostream>

Ice::Ice() {
	this->type = "ice";
}

Ice::Ice(std::string const& type) {
	this->type = type;
}

Ice::Ice(const Ice& object) {
	*this = object;
}

Ice&	Ice::operator=(const Ice& object) {
	if (this != &object)
		this->type = object.type;
	return *this;
}

Ice::~Ice() {
	std::cout << "Call " << this->type << " Destructor" << std::endl;
}

AMateria	*Ice::clone() const {
	return new Ice();
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
