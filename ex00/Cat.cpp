#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
	type = "Cat";
	std::cout << "Called Cat Constructor" << std::endl;
}

Cat::Cat(const Cat& object) {
	*this = object;
};

Cat& Cat::operator=(const Cat& object) {
	if (this != &object) {
		this->type = object.getType();
	}
	return *this;
};

Cat::~Cat() {
	std::cout << "Called Cat Destructor" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "meow meow,," << std::endl;
}

std::string	Cat::getType() const {
	return this->type;
}

void	Cat::setType(std::string type) {
	this->type = type;
}
