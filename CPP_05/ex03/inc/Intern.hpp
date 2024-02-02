/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:54:28 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/02 11:40:38 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include <iostream>

class Intern
{
	public:
		Intern();
		Intern(Intern &intern);
		Intern &operator=(const Intern &intern);
		~Intern();

		AForm *makeForm(std::string nameForm, std::string targer);
	private:
		
};

#endif