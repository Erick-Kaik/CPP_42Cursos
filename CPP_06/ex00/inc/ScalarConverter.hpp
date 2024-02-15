/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:22:15 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/15 13:10:03 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#define RED "\033[1;31m"
#define RESET "\033[0m"

#include <iostream>
#include <typeinfo>
#include <cstdlib>
#include <limits>

enum type
{
	DOUBLE,
	CHAR,
	FLOAT,
	INT,
	ERROR_TYPE
};

enum error
{
	UNABLE,
	NON_DISPLAY,
	IMPOSSIBLE,
	INF_NEG,
	INF_POS,
	NAN
};

class ScalarConverter
{
	public:
		static void convert(const std::string &value);
		
		class CharException : public std::exception { 
			public:
				CharException(int type);
				const char *what() const throw();
			private:
				int _type;
		};
		class IntException : public std::exception { 
			public:
				IntException(int type);
				const char *what() const throw();
			private:
				int _type;
		};
		class FloatException : public std::exception { 
			public:
				FloatException(int type);
				const char *what() const throw();
			private:
				int _type;
		};
		class DoubleException : public std::exception { 
			public:
				DoubleException(int type);
				const char *what() const throw();
			private:
				int _type;
		};
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter &scalarConverter);
		ScalarConverter &operator=(const ScalarConverter &scalarConverter);
		~ScalarConverter();
};

#endif
