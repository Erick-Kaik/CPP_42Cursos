/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:44:43 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/08 13:48:03 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

static void TestingCombat() {
  FragTrap base_marvin("Marvin");
  FragTrap marvin = base_marvin;
  marvin.attack("Moulinette");
  marvin.takeDamage(50);
  marvin.beRepaired(50);
  marvin.takeDamage(120);
  marvin.attack("Moulinette");
}

static void TestHighFive() {
  FragTrap norminette("Norminette");
  norminette.highFivesGuys();
}

int main() {
  TestingCombat();
  TestHighFive();
}