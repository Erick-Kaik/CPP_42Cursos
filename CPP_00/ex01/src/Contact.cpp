/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:04:26 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/13 16:57:05 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact(void) { }

Contact::~Contact(void) { }

void Contact::Add(std::string FirstName, std::string LastName, std::string Nickname, std::string PhoneNumber, std::string darkestSecret)
{
	this->FirstName = FirstName;
	this->LastName = LastName;
	this->Nickname = Nickname;
	this->PhoneNumber = PhoneNumber;
	this->darkestSecret = darkestSecret;
}

void Contact::Display()
{
	std::string aux;
	std::string print;

	for (size_t i = 0; i < 5; i++)
	{
		switch (i)
		{
			case 0:
				aux = this->FirstName;
				break;
			case 1:
				aux = this->LastName;
				break;
			case 2:
				aux = this->Nickname;
				break;
			case 3:
				aux = this->PhoneNumber;
				break;
			default:
				aux = this->darkestSecret;
				break;
		}
		for (size_t j = 0; j < 10; j++)
		{
			if (j > aux.size())
				print += ' ';
			else
			{
				if (aux.length() > 10 && j == 9)
					print += '.';
				else
					print += aux[j];
			}
		}
		if (i + 1 < 5)
			print += '|';
		aux.clear();
	}
	std::cout << print << std::endl;	
}