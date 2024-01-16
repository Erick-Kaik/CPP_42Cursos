/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:54:11 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/03 15:26:22 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Default constructor ScavTrap called" << std::endl;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    this->_guardGate = false;
}

ScavTrap::ScavTrap(ScavTrap &scavTrap) : ClapTrap(scavTrap)
{
    std::cout << "Copy constructor ScavTrap called" << std::endl;
    *this = scavTrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
    std::cout << "Copy assignment operator ScavTrap called" << std::endl;
    if (this != &scavTrap)
    {
        this->_name = scavTrap._name;
        this->_attack_damage = scavTrap._attack_damage;
        this->_energy_points = scavTrap._energy_points;
        this->_hit_points = scavTrap._hit_points;
        this->_guardGate = scavTrap._guardGate;
    }
    return *this;
}

ScavTrap::~ScavTrap() { std::cout << "Destructor ScavTrap called" << std::endl; }

void ScavTrap::attack(const std::string &target)
{
    if (this->isValid() == false)
    {
        std::cout << "ScavTrap has no life or energy points.😭" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!🎯" << std::endl;
    this->_energy_points--;
}

void ScavTrap::guardGate()
{
    if (this->_guardGate == false)
    {
        std::cout << "ScavTrap entered gate guardian mode." << std::endl;
        this->_guardGate = true;
    }
    else
    {
        std::cout << "ScavTrap exited gate guardian mode." << std::endl;
        this->_guardGate = false;
    }
}
