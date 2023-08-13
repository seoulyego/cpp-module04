#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
	std::cout << "Call Animal Constructor" << std::endl;
}

Animal::Animal(const Animal& object) {
	std::cout << "Call Animal Copy Constructor" << std::endl;
	*this = object;
}

Animal&	Animal::operator=(const Animal& object) {
	if (this != &object) {
		this->type = object.getType();
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "Call Animal Destructor" << std::endl;
}

void	Animal::makeSound() const {};

std::string	Animal::getType() const {
	return this->type;
}

void	Animal::setType(std::string type) {
	this->type = type;
}
