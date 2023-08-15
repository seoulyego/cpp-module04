#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <string>
#include <vector>

class Character	: public ICharacter	{

	private:
		std::string	name;
		AMateria	*inventory[4];

	public:
		Character();
		Character(std::string name);
		Character(const Character& object);
		Character&	operator=(const Character& object);
		~Character();

		std::string const&	getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

		AMateria	*getInventory(int idx) const;
};

#endif  // ICHARACTER_HPP
