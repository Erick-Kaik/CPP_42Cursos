/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:32:21 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/29 17:06:47 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"

AForm::AForm(const std::string name, const int gradeSigned, const int gradeExecute) : _name(name), _gradeSigned(gradeSigned), _gradeExecute(gradeExecute)
{
	if (gradeSigned < 1 || gradeExecute < 1)
		throw GradeTooHighException();
	else if (gradeSigned > 150 || gradeExecute > 150)
		throw GradeTooLowException();
	this->_signed = false;
}

AForm::AForm(AForm &aAForm) : _name(aAForm._name), _gradeSigned(aAForm._gradeSigned), _gradeExecute(aAForm._gradeExecute)
{
	*this = aAForm;
}

AForm &AForm::operator=(const AForm &aAForm)
{
	if (this != &aAForm)
		this->_signed = aAForm._signed;
	return *this;
}

AForm::~AForm() { }

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() >= this->getGradeSigned())
	{
		this->_signed = true;
		std::cout << bureaucrat.getName() << " successfully signed " << this->_name << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}


std::string AForm::getName() const { return this->_name; }

bool AForm::getSigned() const { return this->_signed; }

int AForm::getGradeSigned() const { return this->_gradeSigned; }

int AForm::getGradeExecute() const { return this->_gradeExecute; }

AForm::GradeTooHighException::GradeTooHighException() { }

const char *AForm::GradeTooHighException::what() const throw() { return "AForm grade's is too high!"; }

AForm::GradeTooLowException::GradeTooLowException() { }

const char *AForm::GradeTooLowException::what() const throw() { return "AForm grade's is too low!"; }


std::ostream &operator<<(std::ostream &os, const AForm &aAForm)
{
	os <<  aAForm.getName() << " aAForm\n\tsigned: " << aAForm.getSigned() << "\n\tsign grade: " << aAForm.getGradeSigned() << "\n\texec grade: " << aAForm.getGradeExecute() << ".";
	return os;
}