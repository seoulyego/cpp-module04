#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal	{
	private:
		Brain	*brain;
	public:
		WrongCat();
		WrongCat(const WrongCat& object);
		WrongCat& operator=(const WrongCat& object);
		~WrongCat();

		void	makeSound() const;
		Brain	*getBrain() const;
};

#endif  // WRONGCAT_HPP
