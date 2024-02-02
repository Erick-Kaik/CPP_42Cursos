/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:41:02 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/01 15:07:20 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define RESET "\033[0m"

void TestRobotomy() {
  std::cout << BLUE << "--------------- ROBOTOMY TESTS --------------" << RESET
            << "\n";
  try {
    std::cout << "[TEST] Valid Robotomy:\n";
    Bureaucrat mark("Mark", 73);
    RobotomyRequestForm robotomy("Deckard");
    mark.signAForm(robotomy);
    mark.executeForm(robotomy);

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Unsigned Robotomy:\n";
    Bureaucrat mark("Mark", 50);
    RobotomyRequestForm robotomy("Deckard");
    mark.executeForm(robotomy);

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Grade too low:\n";
    Bureaucrat mark("Mark", 40);
    RobotomyRequestForm robotomy("Deckard");
    mark.signAForm(robotomy);
    mark.executeForm(robotomy);

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }
}

void TestPresidentialPardon() {
  std::cout << BLUE
            << "--------------- PRESIDENTIAL PARDON TESTS --------------"
            << RESET << "\n";
  try {
    std::cout << "[TEST] Valid Presidential Pardon:\n";
    Bureaucrat mark("Mark", 30);
    PresidentialPardonForm pardon("Deckard");
    mark.signAForm(pardon);
    mark.executeForm(pardon);

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Unsigned Presidential Pardon:\n";
    Bureaucrat mark("Mark", 8);
    PresidentialPardonForm pardon("Deckard");
    mark.executeForm(pardon);

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Grade too low:\n";
    Bureaucrat mark("Mark", 24);
    PresidentialPardonForm pardon("Deckard");
    mark.signAForm(pardon);
    mark.executeForm(pardon);

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }
}

void TestShrubberyCreation() {
  std::cout << BLUE << "--------------- SHRUBBERY CREATION TESTS --------------"
            << RESET << "\n";
  try {
    std::cout << "[TEST] Valid Shrubbery Creation:\n";
    Bureaucrat mark("Mark", 145);
    ShrubberyCreationForm shrubbery("home");
    mark.signAForm(shrubbery);
    mark.executeForm(shrubbery);

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Unsigned Shrubbery Creation:\n";
    Bureaucrat mark("Mark", 144);
    ShrubberyCreationForm shrubbery("home");
    mark.executeForm(shrubbery);

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Grade too low:\n";
    Bureaucrat mark("Mark", 120);
    ShrubberyCreationForm shrubbery("home");
    mark.signAForm(shrubbery);
    mark.executeForm(shrubbery);

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }
}

int main() {
  TestShrubberyCreation();
  TestRobotomy();
  TestPresidentialPardon();
}
