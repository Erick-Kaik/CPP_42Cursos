/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:54:10 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/03/08 17:20:55 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

class Span
{
	public:
		Span(int max);
		Span(Span &span);
		Span &operator=(const Span &span);
		~Span();

		void addNumber();
		
		int shortestSpan();
		int longestSpan();
	private:
		int _max;
		int _values[];
};

#endif