#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Call Brain Constructor" << std::endl;
}

Brain::Brain(const Brain& object) {
	std::cout << "Call Brain Copy Constructor" << std::endl;
	*this = object;
}

Brain&	Brain::operator=(const Brain& object) {
	if (this != &object) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = object.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Call Brain Destructor" << std::endl;
}

std::string	Brain::getIdeas(int n) const {
	return ideas[n];
}

void	Brain::setIdeas(std::string ideas, int n) {
	this->ideas[n] = ideas;
}
