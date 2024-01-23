/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:32:18 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/23 17:00:54 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Form
{
	public:
		Form(const std::string name, const int gradeSigned, const int gradeExecute);
		Form(Form &form);
		Form &operator=(const Form &form);
		~Form();
		

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