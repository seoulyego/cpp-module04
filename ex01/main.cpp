#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

void	i_wanna_go_wangsibni(void) {
	system("leaks $PPID");
}

int	main() {
	// atexit(i_wanna_go_wangsibni);
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	return 0;
}

// int main(void)
// {
// 	// Cat	d1;
// 	// Cat	d2(d1);

// 	// d1.getBrain()->setIdeas("hi", 0);
// 	// std::cout << "d1: " << d1.getBrain()->getIdeas(0) << std::endl;
// 	// std::cout << "d2: " << d2.getBrain()->getIdeas(0) << std::endl;

// 	std::string str;
// 	Animal *meta[10];

// 	// atexit(i_wanna_go_wangsibni);
// 	for (size_t i = 0; i < 10; i++) {
// 		if (i % 2)
// 			meta[i] = new Dog();
// 		else
// 			meta[i] = new Cat();
// 	}
// 	std::cout << std::endl;
	
// 	for (size_t i = 0; i < 10; i++)
// 		delete meta[i];
// 	std::cout << std::endl;
	

// 	Dog *d = new Dog();
// 	Dog *d2 = new Dog();
// 	std::cout << std::endl;
// 	str = d->getBrain()->getIdeas(0);
// 	std::cout << "Dog1's first idea is "<< str << std::endl;

// 	d->getBrain()->setIdeas("something", 0);
// 	str = d->getBrain()->getIdeas(0);
// 	std::cout << "Dog1's first idea is "<< str << std::endl;

// 	*d2 = *d;
// 	str = d2->getBrain()->getIdeas(0);
// 	std::cout << "Dog2's first idea is "<< str << std::endl;

// 	std::cout << std::endl;
// 	delete d;
// 	delete d2;

// 	return 0;
// }
