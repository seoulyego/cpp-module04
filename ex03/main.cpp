#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

void i_wanna_go_home(void) {
	system("leaks $PPID");
}

int	main(void) {
	atexit(i_wanna_go_home);
	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	Character* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	Character* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	AMateria* floor = me->getInventory(1);
	me->unequip(1);
	delete floor;
	floor = 0;
	delete bob;
	delete me;
	delete src;
	return 0;
}