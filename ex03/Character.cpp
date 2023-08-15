#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

Character::Character() {
	this->name = "default";
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = 0;
	}
}

Character::Character(std::string name) {
	this->name = name;
}

Character::Character(const Character& object) {
	*this = object;
}

Character&	Character::operator=(const Character& object) {
	if (this != &object) {
		this->name = object.name;
		for (int i = 0; i < 4; i++) {
			if (this->inventory[i] != 0)
				delete this->inventory[i];
			if (object.inventory[i] != 0) {
				if (object.inventory[i]->getType() == "ice")
					this->inventory[i] = new Ice();
				else if (object.inventory[i]->getType() == "cure")
					this->inventory[i] = new Cure();
			}
		}
	}
	return *this;
}

Character::~Character() {
	std::cout << "Call " << this->name << " Destructor" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] != 0) {
			delete this->inventory[i];
			this->inventory[i] = 0;
		}
	}
}

std::string const&	Character::getName() const {
	return this->name;
}

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] == 0) {
			this->inventory[i] = m;
			return ;
		}
	}
	delete m;
}

void	Character::unequip(int idx) {
	this->inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter& target) {
	this->inventory[idx]->use(target);
}

AMateria	*Character::getInventory(int idx) const {
	return this->inventory[idx];
}
