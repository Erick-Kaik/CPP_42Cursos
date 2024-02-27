/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:54:08 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/26 10:54:36 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>
#include <cstddef>

template <typename T>
void iter(T *array, size_t lenght, void ft(const T &reference))
{
	for (size_t i = 0; i < lenght; i++)
		ft(array[i]);
}

template <typename T>
void printElement(const T &reference) { std::cout << reference << " "; }

#endif