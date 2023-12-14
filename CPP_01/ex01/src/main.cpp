/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:40:24 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/14 15:10:27 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(void)
{
	int		total = 10;
	Zombie *horde;

	horde = zombieHorde(total, "ValdosCleiton");

	std::cout << "The zombie horde is approaching" << std::endl;
	for (int i = 0; i < total; i++)
		horde[i].announce();
	
	delete[] (horde);
	return 0;
}
