/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:37:36 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/13 17:03:10 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

int main(void)
{
	std::string getTerminal;
	PhoneBook phoneBook;

	while (true)
	{
		std::cout << "type one of the allowed commands: ";
		std::getline(std::cin, getTerminal);
		if (getTerminal == "ADD")
			phoneBook.AddContact();
		else if (getTerminal == "SEARCH")
			phoneBook.DisplayContact();
		else if (getTerminal == "EXIT")
			break;
		else if (getTerminal == "HELP")
			std::cout << "comand avaible:\n\tADD\n\tSEARCH\n\tEXIT" << std::endl;
		else
			std::cout << "this command is invalid. If you need help, type 'HELP'" << std::endl;
		getTerminal.clear();
	}
	return (0);
}
