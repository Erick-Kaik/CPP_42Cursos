/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:22:10 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/09 13:27:15 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter() { }

ScalarConverter::ScalarConverter(ScalarConverter &scalarConverter) { *this = scalarConverter; }

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &scalarConverter) 
{
	if (this != &scalarConverter)
		return *this;
	return *this;
}

ScalarConverter::~ScalarConverter() { }

static bool charIsValid()
{
	
}
static char charConvert()
{

}

static int getType(const std::string value)
{
	size_t len = value.size();
	
	if (len == 1 && std::isdigit(value[0]))

	else if ()

	return (ERROR_TYPE);
}

void ScalarConverter::convert(const std::string &value)
{
	int _type;
	char _char;
	int _int;
	float _float;
	double _double;


	_type = getType();
	try
	{
		//converter a string em char
		if (charIsValid() == false)
			throw ScalarConverter::CharException();
		_char = charConvert();
		std::cout << "char: " << _char << std::endl;
	}
	catch (const ScalarConverter::CharException &e) { std::cerr << "char: " << RED << e.what() << RESET << std::endl; }
	try
	{
		//converter a string em int
		_int = static_cast<int>(*value.c_str());
		std::cout << "int: " << _int << std::endl;
	}
	catch (const ScalarConverter::IntException &e) { std::cerr << "int: " << RED << e.what() << RESET << std::endl; }
	try
	{
		//converter a string em float
		_float = static_cast<float>(*value.c_str());
		std::cout << "float: " << _float << std::endl;
	}
	catch (const ScalarConverter::FloatException &e) { std::cerr << "float: " << RED << e.what() << RESET << std::endl; }
	try
	{
		//converter a string em double
		_double = static_cast<double>(*value.c_str());
		std::cout << "double: " << _double << std::endl;
	}
	catch (const ScalarConverter::DoubleException &e) { std::cerr << "double: " << RED << e.what() << RESET << std::endl; }	
}

ScalarConverter::CharException::CharException() { }

const char *ScalarConverter::CharException::what() const throw() { return "Unable to convert to type char"; }

ScalarConverter::IntException::IntException() { }

const char *ScalarConverter::IntException::what() const throw() { return "Unable to convert to type int"; }

ScalarConverter::FloatException::FloatException() { }

const char *ScalarConverter::FloatException::what() const throw() { return "Unable to convert to type float"; }

ScalarConverter::DoubleException::DoubleException() { }

const char *ScalarConverter::DoubleException::what() const throw() { return "Unable to convert to type double"; }

