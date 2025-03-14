#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
	std::cout << "Call Cat Constructor" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& object) {
	std::cout << "Call Cat Copy Constructor" << std::endl;
	*this = object;
}

Cat&	Cat::operator=(const Cat& object) {
	if (this != &object) {
		this->type = object.getType();
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Call Cat Destructor" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "meow meow,," << std::endl;
}
