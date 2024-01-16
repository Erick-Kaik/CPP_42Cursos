#include "../inc/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat &cat) : Animal(cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &cat)
		this->type = cat.type;
	return *this;
}

Cat::~Cat() { std::cout << "Cat destructor called" << std::endl; }

void Cat::MakeSound() const
{
	std::cout << "Meow!" << std::endl;
}

std::string Cat::getType() const { return this->type; }
