/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:40:51 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/05 10:11:42 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

Intern::Intern() { }

Intern::Intern(Intern &intern) { *this = intern; }

Intern &Intern::operator=(const Intern &intern) 
{
	if (this != &intern)
		return *this;
	
	return *this;
}

Intern::~Intern() { }


AForm *Intern::makeForm(std::string nameForm, std::string target)
{
	std::string typeForms[3] = 	{	"presidential pardon",				"robotomy request",					"shrubbery creation" };
	AForm *pointerForm[3] = 	{	new PresidentialPardonForm(target),	new RobotomyRequestForm(target),	new ShrubberyCreationForm(target) };

	for (int i = 0; i < 3; i++)
	{
		if (nameForm == typeForms[i])
		{
			for (int j = 0; j < 3; j++)
				if (j != i)
					delete pointerForm[j];
			std::cout << "Intern creates " << nameForm << std::endl;
			return pointerForm[i];
		}
	}
	for (int j = 0; j < 3; j++)
		delete pointerForm[j];
	throw NotExistFormException();
	return NULL;
}

Intern::NotExistFormException::NotExistFormException() { }

const char *Intern::NotExistFormException::what() const throw() { return  "The form is not exist!"; }

