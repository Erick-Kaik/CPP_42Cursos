/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:43:08 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/03/22 11:47:19 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(), _brain(new Brain())
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "Base";
}

WrongCat::WrongCat(WrongCat &wrongCat) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = wrongCat.getType();
	this->_brain = new Brain(wrongCat.getBrain());
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &wrongCat) 
	{
		if (this->_brain != NULL)
			delete (this->_brain);
		this->type = wrongCat.type;
		this->_brain = new Brain(wrongCat.getBrain());
	}
	return *this;
}

WrongCat::~WrongCat()
{
	delete this->_brain;
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::MakeSound() const
{
	std::cout << "Meoowwrr-gurgle-gurgle!" << std::endl;
}

std::string WrongCat::getType() const { return this->type; }

Brain &WrongCat::getBrain() const { return *this->_brain; }