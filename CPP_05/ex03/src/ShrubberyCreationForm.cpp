/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:03:58 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/01 15:08:11 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137)
{
	this->_target = target;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &shrubberyCreationForm) : AForm(shrubberyCreationForm.getName(), shrubberyCreationForm.getGradeSigned(), shrubberyCreationForm.getGradeExecute())
{
	*this = shrubberyCreationForm;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberyCreationForm)
{
	if (this != &shrubberyCreationForm)
		this->_target = shrubberyCreationForm._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() { }

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const 
{
	if (this->getSigned() == true && executor.getGrade() >= this->getGradeExecute())
		std::cout << "Create a file " + this->_target + " _shrubbery in the working directory, and writes ASCII trees inside it." << std::endl;
	else
		throw GradeTooLowException();
}