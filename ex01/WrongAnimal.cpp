#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() {
	std::cout << "Call WrongAnimal Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& object) {
	std::cout << "Call WrongAnimal Copy Constructor" << std::endl;
	*this = object;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& object) {
	if (this != &object) {
		this->type = object.getType();
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Call WrongAnimal Destructor" << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout << "JJack JJack" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return this->type;
}

void	WrongAnimal::setType(std::string type) {
	this->type = type;
}
