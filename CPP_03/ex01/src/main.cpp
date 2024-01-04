/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:20:56 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/03 15:22:23 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

static void TestingCombat() {
  ScavTrap base_marvin("Marvin");
  ScavTrap marvin = base_marvin;
  marvin.attack("Moulinette");
  marvin.takeDamage(50);
  marvin.beRepaired(50);
  marvin.takeDamage(120);
  marvin.attack("Moulinette");
}

static void TestGuardKeeper() {
  ScavTrap hodoor("Hodoor");
  hodoor.guardGate();
  hodoor.guardGate();
}

int main() {
  TestingCombat();
  TestGuardKeeper();
}