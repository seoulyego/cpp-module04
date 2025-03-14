#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	std::cout << "Call Dog Constructor" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& object) {
	std::cout << "Call Dog Copy Constructor" << std::endl;
	*this = object;
}

Dog&	Dog::operator=(const Dog& object) {
	if (this != &object) {
		this->type = object.getType();
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Call Dog Destructor" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Bark! Bark!" << std::endl;
}
