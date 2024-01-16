#include "../inc/Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain())
{
	std::cout << BLUE << "Dog default constructor called" << RESET << std::endl;
	this->type = "Dog";
	this->_brain->createIdeas(this->type);
}

Dog::Dog(Dog &cat) : Animal(cat)
{
	std::cout << BLUE << "Dog copy constructor called" << RESET << std::endl;
	*this = cat;
}

Dog &Dog::operator=(const Dog &cat)
{
	std::cout << BLUE << "Dog copy assignment operator called" << RESET << std::endl;
	if (this != &cat)
		this->type = cat.type;
	return *this;
}

Dog::~Dog() 
{ 
	delete this->_brain;
	std::cout << BLUE << "Dog destructor called" << RESET << std::endl;
}

void Dog::MakeSound() const
{
	std::cout << BLUE << "Woof!" << RESET << std::endl;
}

std::string Dog::getType() const { return this->type; }

void Dog::display(size_t n) const
{
	this->_brain->displayIdeias(n, this->type);
}
