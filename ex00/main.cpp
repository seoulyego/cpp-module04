#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

void	i_wanna_go_home(void) {
	system("leaks $PPID");
}

int	main() {
	atexit(i_wanna_go_home);
	const Animal* meta = new Animal();
	const Animal* i = new Dog();
	const Animal* j = new Cat();
	const WrongAnimal* k = new WrongCat();
	
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	meta->makeSound();
	k->makeSound();
	delete meta;
	delete i;
	delete j;
	delete k;
	return 0;
}
