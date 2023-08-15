#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal	{
	private:
		Brain	*brain;

	public:
		Cat();
		Cat(const Cat& object);
		Cat&	operator=(const Cat& object);
		~Cat();

		void	makeSound() const;
		Brain	*getBrain() const;
};

#endif  // CAT_HPP
