#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal	{
	public:
		Dog();
		Dog(const Dog& object);
		Dog& operator=(const Dog& object);
		~Dog();

		void	makeSound() const;
};

#endif  // DOG_HPP
