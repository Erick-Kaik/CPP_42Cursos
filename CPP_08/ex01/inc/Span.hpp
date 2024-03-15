/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:54:10 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/03/15 09:59:58 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	public:
		Span(unsigned int N);
		Span(Span &span);
		Span &operator=(const Span &span);
		~Span();

		void addNumber(int N);
		
		int shortestSpan(void);
		int longestSpan(void);

		class FullMaxSizeException : public std::exception {
			public:
				FullMaxSizeException();
				const char *what() const throw();
		};

		class DistanceException : public std::exception {
			public:
				DistanceException();
				const char *what() const throw();
		};

	private:
		unsigned int		_N;
		std::vector<int>	_vector;
		
};

#endif