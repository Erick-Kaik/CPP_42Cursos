/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:51:26 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/01 09:01:10 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
	public:
		AForm(const std::string name, const int gradeSigned, const int gradeExecute);
		AForm(AForm &aForm);
		AForm &operator=(const AForm &aForm);
		virtual ~AForm();
		
		virtual void execute(Bureaucrat const &executor) const;

		std::string getName() const;
		bool getSigned() const;
		int getGradeSigned() const;
		int getGradeExecute() const;

		void beSigned(const Bureaucrat &bureaucrat);

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
		bool _signed;
		const int _gradeSigned;
		const int _gradeExecute;
};

std::ostream &operator<<(std::ostream &os, const AForm &aForm);

#endif