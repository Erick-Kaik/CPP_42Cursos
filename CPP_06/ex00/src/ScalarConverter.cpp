/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:22:10 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/15 13:24:03 by ekaik-ne         ###   ########.fr       */
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

static bool numberIsValid(int *retType, int type, const std::string value)
{
	*retType = -1;
	if (type == ERROR_TYPE)
		*retType = UNABLE;
	else if (type == INT)
	{
		long intValue = std::strtol(value.c_str(), NULL, 10);
		if (intValue < std::numeric_limits<int>::min() || intValue > std::numeric_limits<int>::max())
			*retType = IMPOSSIBLE;
	}
	else if (type == DOUBLE)
	{
		if (value == "-inf")
			*retType = INF_NEG;
		else if(value == "+inf")
			*retType = INF_POS;
		else if(value == "nan")
			*retType = NAN;
		else
		{
			double doubleConvert = atof(value.c_str());
			if (doubleConvert < std::numeric_limits<double>::min() || doubleConvert > std::numeric_limits<double>::max())
				*retType = IMPOSSIBLE;
		}
	}
	else if (type == FLOAT)
	{
		if (value == "-inff")
			*retType = INF_NEG;
		else if (value == "+inff")
			*retType = INF_POS;
		else if (value == "nanf")
			*retType = NAN;
		else
		{
			float floatConvert = strtof(value.c_str(), NULL);
			if (floatConvert < std::numeric_limits<float>::min() || floatConvert > std::numeric_limits<float>::max())
				*retType = IMPOSSIBLE;
		}
	}
	if (*retType != -1)
		return false;
	return true;
}

static bool charIsValid(int *retType, int type, const std::string value)
{
	*retType = -1;
	if (type == ERROR_TYPE)
		*retType = UNABLE;
	else if (type == INT || type == DOUBLE || type == FLOAT)
	{
		long convertValue = std::strtol(value.c_str(), NULL, 10);
		if (convertValue < 0 || convertValue > 127)
			*retType = IMPOSSIBLE;
		else if (convertValue < 32 || convertValue == 127)
			*retType = NON_DISPLAY;
	}
	if (*retType != -1)
		return false;
	return true;
}

static char charConvert(int type, std::string value)
{
	if (type == CHAR)
		return (value[0]);
	else
	{
		int number = std::atoi(value.c_str());
		return static_cast<char>(number);
	}
}
static bool decimalNumber(std::string value)
{
	int dot = 0;
	int isFloat = 0;

	for (size_t i = 0; i < value.length(); i++)
	{
		if (i == 0 && value[i] == '-')
			continue ;
		else if (std::isdigit(value[i]) == false && value[i] != '.' && value[i] != 'f')
			return false;
		else if (value[i] == '.')
			dot++;
		else if (value[i] == 'f')
			isFloat++;
		if (dot > 1 || isFloat > 1)
			return false;
	}
	return true;
}

static bool allNumber(std::string value)
{
	for (size_t i = 0; i < value.length(); i++)
	{
		if (i == 0 && value[i] == '-')
			continue ;
		else if (std::isdigit(value[i]) == false)
			return false;
	}
	return true;
}

static int getType(const std::string value)
{
 	size_t len = value.size();
	
	if (len == 1 && std::isdigit(value[0]) == false)
		return (CHAR);
	else if (allNumber(value))
		return (INT);
	else if ((decimalNumber(value) && value[value.length() - 1] == 'f') || (value == "-inff" || value == "+inff" || value == "nanf"))
		return (FLOAT);
	else if (decimalNumber(value) || (value == "-inf" || value == "+inf" || value == "nan"))
		return (DOUBLE);
	return (ERROR_TYPE);
}

void ScalarConverter::convert(const std::string &value)
{
	int _type;
	int _retType = -1;
	char _char;
	int _int;
	float _float;
	double _double;

	_type = getType(value);
	try
	{
		//converter a string em char
		if (charIsValid(&_retType, _type, value) == false)
			throw ScalarConverter::CharException(_retType);
		_char = charConvert(_type, value);
		std::cout << "char: '" << _char << "'" << std::endl;
	}
	catch (const ScalarConverter::CharException &e) { std::cerr << "char: " << RED << e.what() << RESET << std::endl; }
	try
	{
		//converter a string em int
		if (numberIsValid(&_retType, _type, value) == false)
			throw ScalarConverter::IntException(_retType);
		int intConvert = std::atoi(value.c_str());
		_int = static_cast<int>(intConvert);
		std::cout << "int: " << _int << std::endl;
	}
	catch (const ScalarConverter::IntException &e) { std::cerr << "int: " << RED << e.what() << RESET << std::endl; }
	try
	{
		//converter a string em float
		if (numberIsValid(&_retType, _type, value) == false)
			throw ScalarConverter::FloatException(_retType);
		float floatConvert = strtof(value.c_str(), NULL);
		_float = static_cast<float>(floatConvert);
		std::cout << "float: " << _float << "f" << std::endl;
	}
	catch (const ScalarConverter::FloatException &e) { std::cerr << "float: " << RED << e.what() << RESET << std::endl; }
	try
	{
		//converter a string em double
		if (numberIsValid(&_retType, _type, value) == false)
			throw ScalarConverter::DoubleException(_retType);
		double doubleConvert = atof(value.c_str());
		_double = static_cast<double>(doubleConvert);
		std::cout << "double: " << _double << std::endl;
	}
	catch (const ScalarConverter::DoubleException &e) { std::cerr << "double: " << RED << e.what() << RESET << std::endl; }	
}

ScalarConverter::CharException::CharException(int type) { this->_type = type; }

const char *ScalarConverter::CharException::what() const throw() 
{
	if (this->_type == NON_DISPLAY)
		return "Non displayable";
	else if (this->_type == IMPOSSIBLE)
		return "Impossible";
	else
		return "Unable to convert to type char"; 
}

ScalarConverter::IntException::IntException(int type) { this->_type = type; }

const char *ScalarConverter::IntException::what() const throw() 
{
	if (this->_type == IMPOSSIBLE)
		return "Impossible";
	else
		return "Unable to convert to type int";
}

ScalarConverter::FloatException::FloatException(int type) { this->_type = type; }

const char *ScalarConverter::FloatException::what() const throw() 
{
	if (this->_type == INF_NEG)
		return "-inff"; 
	if (this->_type == INF_POS)
		return "inff";
	if (this->_type == NAN)
		return "nanf";
	else if (this->_type == IMPOSSIBLE) 
		return "Impossible";
	else
		return "Unable to convert to type float"; 
}

ScalarConverter::DoubleException::DoubleException(int type) { this->_type = type; }

const char *ScalarConverter::DoubleException::what() const throw() 
{
	if (this->_type == INF_NEG)
		return "-inf"; 
	if (this->_type == INF_POS)
		return "inf";
	if (this->_type == NAN)
		return "nan";
	else if (this->_type == IMPOSSIBLE)
		return "Impossible";
	else
		return "Unable to convert to type double"; 
}

