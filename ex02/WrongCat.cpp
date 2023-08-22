#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
	std::cout << "Call WrongCat Constructor" << std::endl;
	type = "WrongCat";
	brain = new Brain();
}

WrongCat::WrongCat(const WrongCat& object) {
	std::cout << "Call WrongCat Copy Constructor" << std::endl;
	this->brain = new Brain();
	*this = object;
}

WrongCat&	WrongCat::operator=(const WrongCat& object) {
	if (this != &object) {
		this->type = object.getType();
		*this->brain = *object.brain;
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "Call WrongCat Destructor" << std::endl;
	delete brain;
}

void	WrongCat::makeSound() const {
	std::cout << "meow meow,," << std::endl;
}

Brain	*WrongCat::getBrain() const {
	return this->brain;
}