/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:26:41 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/08 13:50:37 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Default constructor ClapTrap called" << std::endl;
    this->_name = name;
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
}
ClapTrap::ClapTrap(ClapTrap &clapTrap)
{
    std::cout << "Copy constructor ClapTrap called" << std::endl;
    *this = clapTrap;    
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
    std::cout << "Copy assignment operator ClapTrap called" << std::endl;
    if (this != &clapTrap)
    {
        this->_name = clapTrap._name;
        this->_attack_damage = clapTrap._attack_damage;
        this->_energy_points = clapTrap._energy_points;
        this->_hit_points = clapTrap._hit_points;
    }
    return *this;
}

ClapTrap::~ClapTrap() { std::cout << "Destructor ClapTrap called" << std::endl; }

bool ClapTrap::isValid(void) { return (this->_hit_points <= 0 || this->_energy_points <= 0 ? false :  true); }

void ClapTrap::message(char c, std::string value)
{
    std::cout << "-------------------------------------------\n";
    std::cout << "Status: ❤️ " << this->_hit_points << "\t⚡" << this->_energy_points << std::endl;
    switch (c)
    {
    case 'a':
        std::cout << this->_name << " attacks " << value << ", causing " << this->_attack_damage << " points of damage!🎯" << std::endl;
        break;
    case 'b':
        std::cout << this->_name << " is now healed in " << value << std::endl;
        break;
    case 't':
        std::cout << this->_name << " received " << value << " of damage" << std::endl;
        break;
    default:
        std::cout << this->_name << " has no life or energy points.😭" << std::endl;
        break;
    }
}

void ClapTrap::attack(const std::string &target)
{
    if (this->isValid() == false)
        return message('\0', "");
    this->_energy_points--;
    message('a', target);
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::stringstream ss;

    if (this->isValid() == false)
        return message('\0', "");
    this->_energy_points--;
    ss << amount;
    message('b', ss.str());
    this->_hit_points += amount;
    std::cout << "HP after healing:" << this->_hit_points << "💞" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::stringstream ss;

    if (this->isValid() == false)
        return message('\0', "");
    ss << amount;
    message('t', ss.str());
    this->_hit_points = this->_hit_points - amount <= 0 ? 0 : this->_hit_points - amount;
    std::cout << "HP after damage:" << this->_hit_points << "❤️‍🩹" << std::endl;
}


