/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:35:20 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/14 17:16:28 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(void) { }

void HumanB::attack(void)
{
	if (this->_weapon == NULL)
		std::cout << this->name + "doesn't have a gun" << std::endl;
	else
		std::cout << this->name + " attacks with their " + this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon weapon) 
{
	this->_weapon = &weapon;
}