/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:42:45 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/03/22 12:00:30 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongCat.hpp"

void    subjectAnimalTest()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();        
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->MakeSound();
    j->MakeSound();
    meta->MakeSound();
    
    delete (meta);
    delete (i);
    delete (j);

    return ;
}

void    subjectWrongAnimalTest()
{
    const WrongAnimal* meta = new WrongAnimal();
    const Animal* j = new Dog();
    const WrongAnimal* i = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->MakeSound();
    j->MakeSound();
    meta->MakeSound();

    delete (meta);
    delete (i);
    delete (j);

    return ;
}

void    animalTestOrthodoxCanonical()
{
    Animal Animal00;
    Animal* Animal01 = new Animal();

    std::cout << "---Copy---" << std::endl;
    Animal Animal02 = Animal00;
    std::cout << "---Copy Assigment---" << std::endl;
    Animal00 = *Animal01;

    std::cout << Animal00.getType() << std::endl;
    Animal00.MakeSound();
    std::cout << Animal01->getType() << std::endl;
    Animal01->MakeSound();
    std::cout << Animal02.getType() << std::endl;
    Animal02.MakeSound();

    delete (Animal01);
}

void    catTestOrthodoxCanonical()
{
    Cat Cat00;
    Cat Cat01;

    std::cout << "---Copy---" << std::endl;
    Cat Cat02 = Cat01;
    std::cout << "---Copy Assigment---" << std::endl;
    Cat00 = Cat02;

    std::cout << Cat00.getType() << std::endl;
    Cat00.MakeSound();
    std::cout << Cat01.getType() << std::endl;
    Cat01.MakeSound();
    std::cout << Cat02.getType() << std::endl;
    Cat02.MakeSound();
}

void    dogTestOrthodoxCanonical()
{
    Dog Dog00;
    Dog Dog01;

    std::cout << "---Copy---" << std::endl;
    Dog Dog02 = Dog01;
    std::cout << "---Copy Assigment---" << std::endl;
    Dog00 = Dog02;

    std::cout << Dog00.getType() << std::endl;
    Dog00.MakeSound();
    std::cout << Dog01.getType() << std::endl;
    Dog01.MakeSound();
    std::cout << Dog02.getType() << std::endl;
    Dog02.MakeSound();
}

void    wrongCatTestOrthodoxCanonical()
{
    WrongCat WrongCat00;
    WrongCat WrongCat01;

    std::cout << "---Copy---" << std::endl;
    WrongCat WrongCat02 = WrongCat01;
    std::cout << "---Copy Assigment---" << std::endl;
    WrongCat00 = WrongCat02;

    std::cout << WrongCat00.getType() << std::endl;
    WrongCat00.MakeSound();
    std::cout << WrongCat01.getType() << std::endl;
    WrongCat01.MakeSound();
    std::cout << WrongCat02.getType() << std::endl;
    WrongCat02.MakeSound();
}

void    wrondAnimalTestOrthodoxCanonical()
{
    WrongAnimal WrongAnimal00;
    WrongAnimal* WrongAnimal01 = new WrongAnimal();

    std::cout << "---Copy---" << std::endl;
    WrongAnimal WrongAnimal02 = WrongAnimal00;
    std::cout << "---Copy Assigment---" << std::endl;
    WrongAnimal00 = *WrongAnimal01;

    std::cout << WrongAnimal00.getType() << std::endl;
    WrongAnimal00.MakeSound();
    std::cout << WrongAnimal01->getType() << std::endl;
    WrongAnimal01->MakeSound();
    std::cout << WrongAnimal02.getType() << std::endl;
    WrongAnimal02.MakeSound();
    delete (WrongAnimal01);
}

void subjectEx01Test()
{
    Animal *animal[102];
    for (int i = 0; i < 102; i++)
    {
        std::cout << "Animal " << i << ":" << std::endl;
        if (i < 51) 
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
        animal[i]->MakeSound();
        std::cout << "\n" << std::endl;
    }
    for (int i = 0; i < 102; i++)
    {
        std::cout << "Animal " << i << ":" << std::endl;
        delete animal[i];
    }
}

void    testBrain()
{
    Animal *animal = new Cat();
    Cat pepo;

    *animal = pepo;
    
    delete animal;
}

int main()
{
    {
        std::cout << "00 - Subject Animal test." << std::endl;
        subjectAnimalTest();
        std::cout << "\n" << std::endl; 
    }
    {
        std::cout << "01 - Subject WrongAnimal test." << std::endl;
        subjectWrongAnimalTest();
        std::cout << "\n" << std::endl; 
    }
    {
        std::cout << "02 - Orthodox Canonical methods Animal test." << std::endl;
        animalTestOrthodoxCanonical();
        std::cout << "\n" << std::endl; 
    }
    {
        std::cout << "03 - Orthodox Canonical methods Cat test." << std::endl;
        catTestOrthodoxCanonical();
        std::cout << "\n" << std::endl; 
    }
    {
        std::cout << "04 - Orthodox Canonical methods Dog test." << std::endl;
        dogTestOrthodoxCanonical();
        std::cout << "\n" << std::endl; 
    }
    {
        std::cout << "05 - Orthodox Canonical methods WrongAnimal test." << std::endl;
        wrondAnimalTestOrthodoxCanonical();
        std::cout << "\n" << std::endl; 
    }
    {
        std::cout << "06 - Orthodox Canonical methods WrongCat test." << std::endl;
        wrongCatTestOrthodoxCanonical();
        std::cout << "\n" << std::endl; 
    }
    {
        std::cout << "07 - Subject ex01 test." << std::endl;
        subjectEx01Test();
        std::cout << "\n" << std::endl; 
    }
    {
        std::cout << "08 - Test Brain." << std::endl;
        testBrain();
        std::cout << "\n" << std::endl; 
    }
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

	}
}