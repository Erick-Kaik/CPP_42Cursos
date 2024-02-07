/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:41:02 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/05 10:08:50 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "../inc/Intern.hpp"

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define RESET "\033[0m"

void TestIntern() {
  std::cout << BLUE << "--------------- INTERN TESTS --------------" << RESET
            << "\n";
  try {
    std::cout << "[TEST] Presidential Pardon Form:\n";
    Intern intern;
    AForm *form = intern.makeForm("presidential pardon", "Deckard");
    if (form == NULL) return;
    std::cout << *form;
    delete form;
    std::cout << BLUE "----------------------------------------" << RESET
              << "\n";
  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Robotomy Request Form:\n";
    Intern intern;
    AForm *form = intern.makeForm("robotomy request", "Deckard");
    if (form == NULL) return;
    std::cout << *form;
    delete form;
    std::cout << BLUE "----------------------------------------" << RESET
              << "\n";
  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Shrubbery Creation Form:\n";
    Intern intern;
    AForm *form = intern.makeForm("shrubbery creation", "Deckard");
    if (form == NULL) return;
    std::cout << *form;
    delete form;
    std::cout << BLUE "----------------------------------------" << RESET
              << "\n";
  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Invalid Form:\n";
    Intern intern;
    AForm *form = intern.makeForm("InsurancePolicy", "Deckard");
    if (form == NULL) return;
    std::cout << *form;
    delete form;
    std::cout << BLUE "----------------------------------------" << RESET
              << "\n";
  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }
}

int main() { TestIntern(); }
