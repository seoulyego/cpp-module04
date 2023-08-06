#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal	{
	public:
		Cat();
		Cat(const Cat& object);
		Cat& operator=(const Cat& object);
		virtual ~Cat();

		void		makeSound() const;
		std::string	getType() const;
		void		setType(std::string type);
};

#endif  // CAT_HPP
