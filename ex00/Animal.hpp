#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal	{
	protected:
		std::string	type;
	
	public:
		Animal();
		Animal(const Animal& object);
		Animal&	operator=(const Animal& object);
		virtual ~Animal();

		virtual void		makeSound() const;
		virtual std::string	getType() const;
		virtual void		setType(std::string type);
};

#endif  // ANIMAL_HPP
