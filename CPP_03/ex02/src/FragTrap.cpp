/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:26:58 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/08 13:44:18 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Default constructor FragTrap called" << std::endl;
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}
FragTrap::FragTrap(FragTrap &fragTrap) : ClapTrap(fragTrap)
{
    std::cout << "Copy constructor FragTrap called" << std::endl;
    *this = fragTrap;    
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
    std::cout << "Copy assignment operator FragTrap called" << std::endl;
    if (this != &fragTrap)
    {
        this->_name = fragTrap._name;
        this->_attack_damage = fragTrap._attack_damage;
        this->_energy_points = fragTrap._energy_points;
        this->_hit_points = fragTrap._hit_points;
    }
    return *this;
}

FragTrap::~FragTrap() { std::cout << "Destructor FragTrap called" << std::endl; }

void FragTrap::highFivesGuys(void) { std::cout << this->_name << " is happily celebrating and asking for a HIGH FIVE!" << std::endl; }