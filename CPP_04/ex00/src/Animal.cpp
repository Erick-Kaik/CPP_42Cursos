#include "../inc/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Base";
}

Animal::Animal(Animal &animal) 
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &animal) 
		this->type = animal.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::MakeSound() const
{
	std::cout << "The Class Animal not Sound" << std::endl;
}

std::string Animal::getType() const { return this->type; }
