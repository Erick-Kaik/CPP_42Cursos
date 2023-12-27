/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:53:15 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/14 14:12:52 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(void)
{
	Zombie *zCleiton;

	zCleiton = newZombie("Cleitin da Varoas");
	zCleiton->announce();
	delete(zCleiton);
	randomChump("Valmir King of Delas");
	return (0);
}
