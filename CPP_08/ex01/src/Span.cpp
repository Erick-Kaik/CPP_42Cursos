/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:13:49 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/03/15 10:00:49 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span(unsigned int N)
{
	this->_N = N;
}

Span::Span(Span &span) { *this = span ; }

Span &Span::operator=(const Span &span)
{
	if (this != &span)
	{
		this->_N = span._N;
	}
	return *this;
}

Span::~Span() { }

void Span::addNumber(int N)
{
	
}

int Span::longestSpan()
{
	
}

int Span::shortestSpan()
{

}