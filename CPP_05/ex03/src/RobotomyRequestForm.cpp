/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 09:11:10 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/01 09:23:07 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45)
{
	this->_target = target;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &robotomyRequestForm) : AForm(robotomyRequestForm.getName(), robotomyRequestForm.getGradeSigned(), robotomyRequestForm.getGradeExecute())
{
	*this = robotomyRequestForm;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyRequestForm)
{
	if (this != &robotomyRequestForm)
		this->_target = robotomyRequestForm._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() { }

void RobotomyRequestForm::execute(Bureaucrat const &executor) const 
{
	if (this->getSigned() == true && executor.getGrade() >= this->getGradeExecute())
		std::cout << "Makes some drilling noises. Then, informs that " + this->_target + " has been robotomized successfully 50% of the time. Otherwise, informs that the robotomy failed." << std::endl;
	else
		throw GradeTooLowException();
}