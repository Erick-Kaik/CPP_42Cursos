/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:34:12 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/27 11:34:44 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CPP
#define ARRAY_CPP

#include <iostream>

template <typename T>
class Array
{
	public:
		Array(void)
		{
			std::cout << "Constructor with no parameter called" << std::endl;
			_n = 0;
			_element = nullptr;
		};
		
		Array(unsigned int n) 
		{
			std::cout << "Constructor with an unsigned int n as a parameter called" << std::endl;
			_n = n;
			_element = new T[n]();
		};

		Array(Array &array)
		{
			std::cout << "Constructor by copy called" << std::endl;
			*this = array;
		};
		
		Array &operator=(const Array &array)
		{

		};
		
		~Array()
		{

		};

		
	private:
		unsigned int _n;
		T *_element;
};

#endif