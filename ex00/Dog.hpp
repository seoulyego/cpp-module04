#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal	{
	public:
		Dog();
		Dog(const Dog& object);
		Dog& operator=(const Dog& object);
		virtual ~Dog();

		void		makeSound() const;
		std::string	getType() const;
		void		setType(std::string type);
};

#endif  // DOG_HPP
