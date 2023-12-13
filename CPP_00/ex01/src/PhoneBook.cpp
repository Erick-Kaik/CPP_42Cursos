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
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string darkestSecret;

	if (count == 8)
		count = 0;
	std::cout << "Enter first name: ";
	std::getline(std::cin, FirstName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, LastName);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, Nickname);
	for (size_t check = 0; check < 3; check++)
	{
		std::cout << "Enter phone number(only numbers): ";
		std::getline(std::cin, PhoneNumber);
		for (size_t i = 0; i < PhoneNumber.length(); i++)
		{
			if (!std::isdigit(PhoneNumber[i]) || PhoneNumber.length() < 8)
				std::cout << "All characters must be digits\nTry again" << std::endl;
			else
				break ;
			if (check + 1 == 3)
			{
				std::cout << "Error" << std::endl;
				return ;
			}			
		}
		PhoneNumber.clear();
	}
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkestSecret);
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
	if (strNum.fail())
	{
		std::cout << "The index searched was higher than your contact list supports, look for a contact between 1 and " + numStr.str() << std::endl;
		return ;
	}
	else if (index == 0)
	{
		for (int i = 0; i < this->list; i++)
        	this->contatos[i].Display();
	}
    else
        this->contatos[index - 1].Display();
}
