#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal	{
	protected:
		std::string	type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& object);
		WrongAnimal&	operator=(const WrongAnimal& object);
		virtual ~WrongAnimal();

		void			makeSound() const;
		std::string		getType() const;
		void			setType(std::string type);
};

#endif  // WRONGANIMAL_HPP
