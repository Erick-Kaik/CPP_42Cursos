#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const WrongAnimal *wrong = new WrongAnimal();
	const WrongAnimal *defectiveCat = new WrongCat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->MakeSound(); //will output the cat sound!
	j->MakeSound();
	meta->MakeSound();

	std::cout << wrong->getType() << " " << std::endl;
	std::cout << defectiveCat->getType() << " " << std::endl;
	defectiveCat->MakeSound();
	wrong->MakeSound();

	delete meta;
	delete j;
	delete i;

	delete defectiveCat;
	delete wrong;

	return 0;
}