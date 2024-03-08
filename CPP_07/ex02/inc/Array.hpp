/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:34:12 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/03/04 15:43:59 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	public:
		Array(void)
		{
			std::cout << "Constructor with no parameter called" << std::endl;
			this->_n = 0;
			this->_element = NULL;
		};
		
		Array(unsigned int n) 
		{
			std::cout << "Constructor with an unsigned int n as a parameter called" << std::endl;
			this->_n = n;
			this->_element = new T[n]();
		};

		Array(Array &array)
		{
			std::cout << "Constructor by copy called" << std::endl;
			this->_n = array.size();
			this->_element = NULL;
			*this = array;
		};
		
		Array &operator=(const Array &array)
		{
			std::cout << "Assignment operator called" << std::endl;
			try
			{
				if (this->_element != NULL)
					delete[] this->_element;
				if (array.size() > 0)
				{
					this->_n = array.size();
					this->_element = new T[this->_n];
					for (unsigned int i = 0; i < this->size(); i++)
						this->_element[i] = array._element[i];
				}
			}
			catch(const IndexOutsideParameterException& e)
			{
				std::cerr << e.what() << std::endl;
			}
			return *this;
		};
		
		T &operator[](unsigned int i)
		{
			if (i >= this->_n || this->_element == NULL)
				throw Array<T>::IndexOutsideParameterException();
			return this->_element[i];
		}

		unsigned int size(void) const { return this->_n; }

		~Array()
		{
			std::cout << "Destructor called" << std::endl;
			if (this->_element != NULL)
				delete[] this->_element;
		};

		class IndexOutsideParameterException : public std::exception
		{
			public:
				IndexOutsideParameterException() { };
				const char *what() const throw();
		};

	private:
		unsigned int _n;
		T *_element;
};

template <typename T>
const char *Array<T>::IndexOutsideParameterException::what() const throw() { return "Index is exceeding the size of the array!"; }

#endif