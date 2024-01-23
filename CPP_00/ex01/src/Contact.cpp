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

std::string Contact::getFirstName(void) { return this->FirstName; }
std::string Contact::getLastName(void) { return this->LastName; }
std::string Contact::getNickname(void) { return this->Nickname; }
std::string Contact::getPhoneNumber(void) { return this->PhoneNumber; }
std::string Contact::getDarkestSecret(void) { return this->darkestSecret; }

void Contact::Display(int index)
{
	std::string			aux;
	std::string			print;
	std::stringstream	numStr;

	numStr << index;
	std::cout << "INDEX    |FirstName|Last Name|Nickname " << std::endl;
	std::cout << "---------|---------|---------|---------" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		switch (i)
		{
			case 0:
				aux = numStr.str();
				break;
			case 1:
				aux = getFirstName();
				break;
			case 2:
				aux = getLastName();
				break;
			case 3:
				aux = getNickname();
				break;
		}
		for (size_t j = 0; j < 10; j++)
		{
			if (j > aux.length())
				print += ' ';
			else
			{
				if (aux.length() > 10 && j == 9)
					print += '.';
				else
					print += aux[j];
			}
		}
		if (i < 3)
			print += '|';
		aux.clear();
	}
	std::cout << print << std::endl;	
}

void Contact::DisplayUnique(void)
{
	std::cout << "Display unique contact" << std::endl;
	std::cout << "First Name: " + getFirstName() << std::endl;
	std::cout << "Last Name: " + getLastName() << std::endl;
	std::cout << "Nickname: " + getNickname() << std::endl;
	std::cout << "Phone Number: " + getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " + getDarkestSecret() << std::endl;
	std::cout << "---------------------------------------" << std::endl;
}