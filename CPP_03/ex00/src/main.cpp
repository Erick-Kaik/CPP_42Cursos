/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:25:35 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/03 13:57:35 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"


static void TestEnergy() {
    std::cout << "--------------- Testing Energy ---------------\n";
    ClapTrap immortal("Immortal");
    for (int i = 0; i < 10; i++)
        immortal.beRepaired(10);
    immortal.beRepaired(100);
    immortal.attack("Weak Robot");
}

static void TestingCombat() {
    std::cout << "--------------- Testing Combat ---------------\n";
    ClapTrap bot1("Marvin");
    bot1.attack("Moulinette");
    bot1.takeDamage(5);
    bot1.beRepaired(5);
    bot1.takeDamage(20);
    bot1.attack("Moulinette");
}

int main() {
  TestEnergy();
  TestingCombat();
}