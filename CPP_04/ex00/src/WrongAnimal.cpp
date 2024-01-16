#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = "Base";
}

WrongAnimal::WrongAnimal(WrongAnimal &wrongAnimal)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = wrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &wrongAnimal) 
		this->type = wrongAnimal.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;

}

void WrongAnimal::MakeSound() const
{
	std::cout << "The Class WrongAnimal not Sound" << std::endl;
}

std::string WrongAnimal::getType() const { return this->type; }


