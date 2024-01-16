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

	std::cout << "\n\n\n-----------------------------------------------------\n\n\nGo Work" << std::endl;

	const Animal *StressTest[100];

	for (size_t i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			StressTest[i] = new Cat();
		else
			StressTest[i] = new Dog();

		StressTest[i]->MakeSound();
		StressTest[i]->display(i);
	}
	
	std::cout << "\n\n\n-------------------------------------------------\n\n\nGo test Copy" << std::endl;

	std::cout << "DeepCopyCat" << std::endl;
	std::cout << "Original" << std::endl;
	StressTest[40]->display(40);
	std::cout << "Copy" << std::endl;
	const Animal *DeepCopyCat = StressTest[40];
	DeepCopyCat->display(40);


	std::cout << "DeepCopyDog" << std::endl;
	std::cout << "Original" << std::endl;
	StressTest[49]->display(49);
	const Animal *DeepCopyDog = StressTest[49];
	std::cout << "Copy" << std::endl;
	DeepCopyDog->display(49);


	std::cout << "\n\n\n-------------------------------------------------\n\n\nDelete" << std::endl;
	for (size_t i = 0; i < 100; i++)
		delete StressTest[i];

	std::cout << "\n\n\n-------------------------------------------------\n\n\nSubject" << std::endl;
	const Animal* p = new Dog();
	const Animal* h = new Cat();

	delete p;//should not create a leak
	delete h;

	return 0;
}