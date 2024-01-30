/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:41:02 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/30 14:41:25 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

void TestRobotomy() {
  std::cout << BLUE << "--------------- ROBOTOMY TESTS --------------" << RESET
            << "\n";
  try {
    std::cout << "[TEST] Valid Robotomy:\n";
    Bureaucrat mark("Mark", 40);
    RobotomyRequestForm robotomy("Deckard");
    mark.SignAForm(robotomy);
    mark.ExecuteForm(robotomy);

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Unsigned Robotomy:\n";
    Bureaucrat mark("Mark", 40);
    RobotomyRequestForm robotomy("Deckard");
    mark.ExecuteForm(robotomy);

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Grade too low:\n";
    Bureaucrat mark("Mark", 50);
    RobotomyRequestForm robotomy("Deckard");
    mark.SignAForm(robotomy);
    mark.ExecuteForm(robotomy);

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
    Bureaucrat mark("Mark", 1);
    PresidentialPardonForm pardon("Deckard");
    mark.SignAForm(pardon);
    mark.ExecuteForm(pardon);

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Unsigned Presidential Pardon:\n";
    Bureaucrat mark("Mark", 1);
    PresidentialPardonForm pardon("Deckard");
    mark.ExecuteForm(pardon);

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Grade too low:\n";
    Bureaucrat mark("Mark", 25);
    PresidentialPardonForm pardon("Deckard");
    mark.SignAForm(pardon);
    mark.ExecuteForm(pardon);

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }
}

void TestShrubberyCreation() {
  std::cout << BLUE << "--------------- SHRUBBERY CREATION TESTS --------------"
            << RESET << "\n";
  try {
    std::cout << "[TEST] Valid Shrubbery Creation:\n";
    Bureaucrat mark("Mark", 1);
    ShrubberyCreationForm shrubbery("home");
    mark.SignAForm(shrubbery);
    mark.ExecuteForm(shrubbery);

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Unsigned Shrubbery Creation:\n";
    Bureaucrat mark("Mark", 1);
    ShrubberyCreationForm shrubbery("home");
    mark.ExecuteForm(shrubbery);

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Grade too low:\n";
    Bureaucrat mark("Mark", 140);
    ShrubberyCreationForm shrubbery("home");
    mark.SignAForm(shrubbery);
    mark.ExecuteForm(shrubbery);

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }
}

int main() {
  TestShrubberyCreation();
  TestRobotomy();
  TestPresidentialPardon();
}
