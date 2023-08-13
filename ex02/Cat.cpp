#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
	std::cout << "Call Cat Constructor" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& object) {
	std::cout << "Call Cat Copy Constructor" << std::endl;
	this->brain = new Brain();
	*this = object;
}

Cat&	Cat::operator=(const Cat& object) {
	if (this != &object) {
		this->type = object.getType();
		*this->brain = *object.brain;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Call Cat Destructor" << std::endl;
	delete brain;
}

void	Cat::makeSound() const {
	std::cout << "meow meow,," << std::endl;
}

Brain	*Cat::getBrain() const {
	return this->brain;
}
