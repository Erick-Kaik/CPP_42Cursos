/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:35:25 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/14 17:05:29 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(std::string type) 
{
	this->type = type;
}

Weapon::~Weapon(void) { }

const std::string& Weapon::getType(void)
{
	const std::string &retValue = this->type;
	return (retValue);
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}