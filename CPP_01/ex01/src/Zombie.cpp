/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:18:31 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/14 14:43:28 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie(void) { }

Zombie::~Zombie(void) 
{
	std::cout << "the zombie " + this->name + " was cured" << std::endl;
}
void Zombie::announce(void)
{
	std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) { this->name = name; }