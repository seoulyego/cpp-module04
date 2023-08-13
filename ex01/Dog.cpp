#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	std::cout << "Call Dog Constructor" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& object) {
	std::cout << "Call Dog Copy Constructor" << std::endl;
	this->brain = new Brain();
	*this = object;
}

Dog&	Dog::operator=(const Dog& object) {
	if (this != &object) {
		this->type = object.getType();
		*this->brain = *object.brain;
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Call Dog Destructor" << std::endl;
	delete brain;
}

void	Dog::makeSound() const {
	std::cout << "Bark! Bark!" << std::endl;
}

Brain	*Dog::getBrain() const {
	return this->brain;
}
