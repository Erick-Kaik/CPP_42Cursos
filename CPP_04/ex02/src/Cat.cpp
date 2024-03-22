#include "../inc/Cat.hpp"

Cat::Cat() : Animal(), _brain(new Brain())
{
	std::cout << YELLOW << "Cat default constructor called" << RESET << std::endl;
	this->type = "Cat";
	this->_brain->createIdeas(this->type);
}

Cat::Cat(Cat &cat) : Animal()
{
	std::cout << YELLOW << "Cat copy constructor called" << RESET << std::endl;
	this->type = cat.getType();
	this->_brain = new Brain(cat.getBrain());
}

Cat &Cat::operator=(const Cat &cat)
{
	std::cout << YELLOW << "Cat copy assignment operator called" << RESET << std::endl;
	if (this != &cat)
	{
		if (this->_brain != NULL)
			delete (this->_brain);
		this->type = cat.type;
		this->_brain = new Brain(cat.getBrain());
	}
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << YELLOW << "Cat destructor called" << RESET << std::endl;
}

void Cat::MakeSound() const
{
	std::cout << YELLOW << "Meow!" << RESET << std::endl;
}

std::string Cat::getType() const { return this->type; }

void Cat::display(size_t n) const
{
	this->_brain->displayIdeias(n, this->type);
}

Brain &Cat::getBrain() const { return *this->_brain; }