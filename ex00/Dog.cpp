#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	type = "Dog";
	std::cout << "Called Dog Constructor" << std::endl;
}

Dog::Dog(const Dog& object) {
	*this = object;
};

Dog& Dog::operator=(const Dog& object) {
	if (this != &object) {
		this->type = object.getType();
	}
	return *this;
};

Dog::~Dog() {
	std::cout << "Called Dog Destructor" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Bark! Bark!" << std::endl;
}

std::string	Dog::getType() const {
	return this->type;
}

void	Dog::setType(std::string type) {
	this->type = type;
}
