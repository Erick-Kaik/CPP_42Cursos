/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:51:07 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/01 09:07:19 by ekaik-ne         ###   ########.fr       */
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

AForm::AForm(AForm &aForm) : _name(aForm._name), _gradeSigned(aForm._gradeSigned), _gradeExecute(aForm._gradeExecute)
{
	*this = aForm;
}

AForm &AForm::operator=(const AForm &aForm)
{
	if (this != &aForm)
		this->_signed = aForm._signed;
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

void  AForm::execute(Bureaucrat const &executor) const { (void)executor; }

std::ostream &operator<<(std::ostream &os, const AForm &aForm)
{
	os <<  aForm.getName() << " aForm\n\tsigned: " << aForm.getSigned() << "\n\tsign grade: " << aForm.getGradeSigned() << "\n\texec grade: " << aForm.getGradeExecute() << ".";
	return os;
}