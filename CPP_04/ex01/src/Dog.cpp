/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:42:36 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/03/22 11:41:01 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain())
{
	std::cout << BLUE << "Dog default constructor called" << RESET << std::endl;
	this->type = "Dog";
	this->_brain->createIdeas(this->type);
}

Dog::Dog(Dog &dog) : Animal()
{
	std::cout << BLUE << "Dog copy constructor called" << RESET << std::endl;
	this->type = dog.getType();
	this->_brain = new Brain(dog.getBrain());
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << BLUE << "Dog copy assignment operator called" << RESET << std::endl;
	if (this != &dog)
	{
		if (this->_brain != NULL)
			delete this->_brain;
		this->type = dog.type;
		this->_brain = new Brain(dog.getBrain());
	}
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

Brain &Dog::getBrain() const { return *this->_brain; }