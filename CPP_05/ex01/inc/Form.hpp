/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:32:18 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/29 16:45:50 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
	public:
		Form(const std::string name, const int gradeSigned, const int gradeExecute);
		Form(Form &form);
		Form &operator=(const Form &form);
		~Form();
		
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

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif