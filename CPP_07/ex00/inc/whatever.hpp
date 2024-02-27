/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:43:20 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/22 16:53:50 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &v1, T &v2)
{
	T aux = v2;
	v2 = v1;
	v1 = aux;
}

template <typename T>
T min(T v1, T v2)
{
	return v1 == v2 ? v2 : (v1 < v2 ? v1 : v2);
}

template <typename T>
T max(T v1, T v2)
{
	return v1 == v2 ? v2 : (v1 > v2 ? v1 : v2);
}

#endif