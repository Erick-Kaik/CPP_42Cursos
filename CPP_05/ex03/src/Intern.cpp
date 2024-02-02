/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:40:51 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/02 11:44:48 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

Intern::Intern() { }

Intern::Intern(Intern &intern) { *this = intern; }

Intern &Intern::operator=(const Intern &intern) 
{
	if (this != &intern)
		return *this;
	
	return *this;
}

Intern::~Intern() { }