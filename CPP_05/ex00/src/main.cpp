/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:39:11 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/23 16:20:59 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "../inc/Bureaucrat.hpp"

void TestCreateValidBureaucrat() {
  std::cout << BLUE << "--------------- VALID BUREAUCRAT TESTS --------------"
             RESET << "\n";

  std::cout << "[TEST] Create Lowest Grade:\n";
  Bureaucrat mark("Mark", 150);
  std::cout << GREEN << mark << RESET << "\n";

  std::cout << "[TEST] Create Highest Grade:\n";
  Bureaucrat helly("Helly", 1);
  std::cout << GREEN << helly << RESET << "\n";

  std::cout << "[TEST] Create Normal Grade:\n";
  Bureaucrat dylan("Dylan", 99);
  std::cout << GREEN << dylan << RESET << "\n";

  std::cout << "[TEST] Copy Constructor:\n";
  Bureaucrat dylan_clone(dylan);
  std::cout << GREEN << dylan << RESET << "\n";
}

void TestCreateInvalidBureacrat() {
  std::cout << BLUE << "--------------- INVALID BUREAUCRAT TESTS --------------"
            << RESET << "\n";

  try {
    std::cout << "[TEST] Grade too Low:\n";
    Bureaucrat mark("Mark", 151);
    std::cout << GREEN << mark << RESET << "\n";

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Grade too High:\n";
    Bureaucrat helly("Helly", 0);
    std::cout << GREEN << helly << RESET << "\n";

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Invalid Assign:\n";
    Bureaucrat irving("Irving", 55);
    Bureaucrat dylan("Dylan", 42);
    irving = dylan;
    std::cout << GREEN << irving << RESET << "\n";

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }
}

void TestGradeChange() {
  std::cout << BLUE << "--------------- GRADE CHANGE TESTS --------------"
            << RESET << "\n";

  std::cout << "[TEST] Increment Grade:\n";
  Bureaucrat mark("Mark", 100);
  std::cout << GREEN << mark << RESET << "\n";
  mark.incrementGrade();
  std::cout << GREEN << mark << RESET << "\n";

  std::cout << "[TEST] Decrement Grade:\n";
  mark.decrementGrade();
  std::cout << GREEN << mark << RESET << "\n";

  try {
    std::cout << "[TEST] Invalid Increment Grade:\n";
    Bureaucrat dylan("Dylan", 1);
    std::cout << GREEN << dylan << RESET << "\n";
    dylan.incrementGrade();
    std::cout << GREEN << dylan << RESET << "\n";

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }

  try {
    std::cout << "[TEST] Invalid Decrement Grade:\n";
    Bureaucrat helly("Helly", 150);
    std::cout << GREEN << helly << RESET << "\n";
    helly.decrementGrade();
    std::cout << GREEN << helly << RESET << "\n";

  } catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << "\n";
  }
}

int main() {
  TestCreateValidBureaucrat();
  std::cout << "-----------" << std::endl;
  TestCreateInvalidBureacrat();
  TestGradeChange();
}
