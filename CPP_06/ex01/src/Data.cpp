/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:45:05 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/15 16:25:44 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Data.hpp"

Data::Data(int intValue, std::string stringValue)
{
	this->_intValue = intValue;
	this->_stringValue = stringValue;
}

Data::Data(Data &data) { *this = data; }

Data &Data::operator=(const Data &data)
{
	if (this != &data)
	{
		this->_intValue = data._intValue;
		this->_stringValue = data._stringValue;
	}
	return *this;
}

Data::~Data() { }

void Data::displayData(void)
{
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "int value: " << this->_intValue << std::endl;
	std::cout << "string value: " << this->_stringValue << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
}

int Data::displayIntValue(void) { return this->_intValue; }

std::string Data::displayStringValue(void) { return this->_stringValue; }
