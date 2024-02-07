/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:54:28 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/05 10:07:23 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

class Intern
{
	public:
		Intern();
		Intern(Intern &intern);
		Intern &operator=(const Intern &intern);
		~Intern();

		AForm *makeForm(std::string nameForm, std::string target);

	class NotExistFormException : public std::exception { 
			public:
				NotExistFormException();
				const char *what() const throw();
	};
	
};

#endif