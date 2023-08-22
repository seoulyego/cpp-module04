#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
	std::cout << "Call WrongCat Constructor" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& object) {
	std::cout << "Call WrongCat Copy Constructor" << std::endl;
	*this = object;
}

WrongCat&	WrongCat::operator=(const WrongCat& object) {
	if (this != &object) {
		this->type = object.getType();
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "Call WrongCat Destructor" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "meow meow,," << std::endl;
}
