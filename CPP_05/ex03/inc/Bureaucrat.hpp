/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:32:44 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/01 08:58:39 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(Bureaucrat &bureaucrat);
		Bureaucrat &operator=(const Bureaucrat &bureaucrat);
		~Bureaucrat();

		void incrementGrade();
		void decrementGrade();
		void signAForm(AForm &Aform);

		std::string getName() const;
		int getGrade() const;

		void executeForm(const AForm &form);

		class GradeTooHighException : public std::exception { 
			public:
				GradeTooHighException();
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception { 
			public:
				GradeTooLowException();
				const char *what() const throw();
		};

	private:
		const std::string _name;
		int _grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif