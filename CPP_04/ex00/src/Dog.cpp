#include "../inc/Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog &cat) : Animal(cat)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = cat;
}

Dog &Dog::operator=(const Dog &cat)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &cat)
		this->type = cat.type;
	return *this;
}

Dog::~Dog() { std::cout << "Dog destructor called" << std::endl; }

void Dog::MakeSound() const
{
	std::cout << "Woof!" << std::endl;
}

std::string Dog::getType() const { return this->type; }
