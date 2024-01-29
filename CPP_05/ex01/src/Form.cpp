/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:32:21 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/29 17:06:47 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

Form::Form(const std::string name, const int gradeSigned, const int gradeExecute) : _name(name), _gradeSigned(gradeSigned), _gradeExecute(gradeExecute)
{
	if (gradeSigned < 1 || gradeExecute < 1)
		throw GradeTooHighException();
	else if (gradeSigned > 150 || gradeExecute > 150)
		throw GradeTooLowException();
	this->_signed = false;
}

Form::Form(Form &form) : _name(form._name), _gradeSigned(form._gradeSigned), _gradeExecute(form._gradeExecute)
{
	*this = form;
}

Form &Form::operator=(const Form &form)
{
	if (this != &form)
		this->_signed = form._signed;
	return *this;
}

Form::~Form() { }

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() >= this->getGradeSigned())
	{
		this->_signed = true;
		std::cout << bureaucrat.getName() << " successfully signed " << this->_name << std::endl;
	}
	else
		throw Form::GradeTooLowException();
}


std::string Form::getName() const { return this->_name; }

bool Form::getSigned() const { return this->_signed; }

int Form::getGradeSigned() const { return this->_gradeSigned; }

int Form::getGradeExecute() const { return this->_gradeExecute; }

Form::GradeTooHighException::GradeTooHighException() { }

const char *Form::GradeTooHighException::what() const throw() { return "Form grade's is too high!"; }

Form::GradeTooLowException::GradeTooLowException() { }

const char *Form::GradeTooLowException::what() const throw() { return "Form grade's is too low!"; }


std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os <<  form.getName() << " form\n\tsigned: " << form.getSigned() << "\n\tsign grade: " << form.getGradeSigned() << "\n\texec grade: " << form.getGradeExecute() << ".";
	return os;
}