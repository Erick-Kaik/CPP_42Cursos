/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:34:17 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/14 17:16:01 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void attack(void);
		void setWeapon(Weapon &weapon);
		
	private:
		std::string name;
		Weapon		*_weapon;
};

#endif