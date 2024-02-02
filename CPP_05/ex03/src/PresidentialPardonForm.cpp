/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:24:50 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/01 15:02:37 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5)
{
	this->_target = target;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &presidentialPardonForm) : AForm(presidentialPardonForm.getName(), presidentialPardonForm.getGradeSigned(), presidentialPardonForm.getGradeExecute())
{
	*this = presidentialPardonForm;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialPardonForm)
{
	if (this != &presidentialPardonForm)
		this->_target = presidentialPardonForm._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() { }

void PresidentialPardonForm::execute(Bureaucrat const &executor) const 
{
	if (this->getSigned() == true && executor.getGrade() >= this->getGradeExecute())
		std::cout << "Informs that " + this->_target + " has been pardoned by Zaphod Beeblebrox" << std::endl;
	else
		throw GradeTooLowException();
}
