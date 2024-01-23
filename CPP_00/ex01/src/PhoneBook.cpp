/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:38:06 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/13 17:38:03 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook(void) 
{
	this->list = 0;
}

PhoneBook::~PhoneBook(void) { }

void PhoneBook::AddContact(void)
{
	static int	count = 0;
	bool		isValid = false;
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string darkestSecret;

	if (count == 8)
		count = 0;
	std::cout << "Enter first name: ";
	std::getline(std::cin, FirstName);
	if (this->FieldsValid(FirstName) == false)
	{
		std::cout << "Field 'First name' cannot be empty" << std::endl;
		return ;
	}
	std::cout << "Enter last name: ";
	std::getline(std::cin, LastName);
	if (this->FieldsValid(LastName) == false)
	{
		std::cout << "Field 'Last name' cannot be empty" << std::endl;
		return ;
	}
	std::cout << "Enter nickname: ";
	std::getline(std::cin, Nickname);
	if (this->FieldsValid(Nickname) == false)
	{
		std::cout << "Field 'Nickname' cannot be empty" << std::endl;
		return ;
	}
	for (size_t check = 0; check < 3; check++)
	{
		isValid = true;
		std::cout << "Enter phone number(only numbers): ";
		std::getline(std::cin, PhoneNumber);
		for (size_t i = 0; i < PhoneNumber.length(); i++)
		{
			if (!std::isdigit(PhoneNumber[i]))
			{
				std::cout << "All characters must be digits\nTry again." << std::endl;
				isValid = false;
				break ;
			}
		}
		if (PhoneNumber.length() != 8 && isValid == true)
		{
			std::cout << "Enter 8 digits to register the phone number." << std::endl;
			isValid = false;
		}
		if (isValid == true)
			break;
		if (check + 1 == 3)
		{
			std::cout << "ERROR!!!\nYou have exceeded the maximum number of attempts to enter a valid phone number." << std::endl;
			return ;
		}			
		PhoneNumber.clear();
	}
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkestSecret);
	if (this->FieldsValid(darkestSecret) == false)
	{
		std::cout << "Field 'Darkest secret' cannot be empty" << std::endl;
		return ;
	}
	this->contatos[count].Add(FirstName, LastName, Nickname, PhoneNumber, darkestSecret);
	if (this->list < 8)
		this->list++;
	count++;
}

void PhoneBook::DisplayContact()
{
	int					index;
	std::string			indexStr;
	std::stringstream	numStr;
	std::istringstream 	strNum;

	if (this->list < 0 || this->list == 0)
	{
		std::cout << "Add at least one contact to your contact list. Use the 'ADD' command" << std::endl;
		return ;
	}
	numStr << this->list;
	std::cout << "Choose a contact between 1 and " + numStr.str() + " or type 0 to show all: ";
	std::getline(std::cin, indexStr);
	for (size_t i = 0; i < indexStr.length(); i++)
	{
		if (!std::isdigit(indexStr[i]))
		{
			std::cout << "All characters must be digits" << std::endl;
			return ;
		}
	}
	strNum.str(indexStr);
	strNum >> index;
	if (strNum.fail() || index > this->list)
	{
		std::cout << "The index searched was higher than your contact list supports, look for a contact between 1 and " + numStr.str() << std::endl;
		return ;
	}
	else if (index == 0)
	{
		for (int i = 0; i < this->list; i++)
        	this->contatos[i].Display(i + 1);
	}
    else
        this->contatos[index - 1].DisplayUnique();
}

bool PhoneBook::FieldsValid(const std::string &str)
{
	size_t first = str.find_first_not_of(" \t\n\r");
	size_t last = str.find_first_not_of(" \t\n\r");

	if (first == std::string::npos || last == std::string::npos)
		return false;
	return true;
}