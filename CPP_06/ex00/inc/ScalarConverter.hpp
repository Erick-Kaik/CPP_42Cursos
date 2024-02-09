/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:22:15 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/09 13:23:54 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#define RED "\033[1;31m"
#define RESET "\033[0m"

#include <iostream>

enum type
{
	DOUBLE,
	CHAR,
	FLOAT,
	INT,
	ERROR_TYPE
};

class ScalarConverter
{
	public:
		static void convert(const std::string &value);
		
		class CharException : public std::exception { 
			public:
				CharException();
				const char *what() const throw();
		};
		class IntException : public std::exception { 
			public:
				IntException();
				const char *what() const throw();
		};
		class FloatException : public std::exception { 
			public:
				FloatException();
				const char *what() const throw();
		};
		class DoubleException : public std::exception { 
			public:
				DoubleException();
				const char *what() const throw();
		};
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter &scalarConverter);
		ScalarConverter &operator=(const ScalarConverter &scalarConverter);
		~ScalarConverter();
};

#endif
