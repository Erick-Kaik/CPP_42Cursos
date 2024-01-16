/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:15:06 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/03 15:04:27 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <sstream>

class ClapTrap
{
    public:
        ClapTrap(std::string name);
        ClapTrap(ClapTrap &clapTrap);
        ClapTrap &operator=(const ClapTrap &clapTrap);
        ~ClapTrap();
        
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    protected:
        std::string _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage;

        bool isValid(void);
        void message(char c, std::string value);
};

#endif