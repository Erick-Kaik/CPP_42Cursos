/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:35:17 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/14 17:07:23 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA(void) { }

void HumanA::attack(void)
{
	std::cout << this->name + " attacks with their " + this->_weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon weapon) { this->_weapon = weapon; }
