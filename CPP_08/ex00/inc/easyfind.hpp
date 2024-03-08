/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:47:23 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/03/08 16:40:28 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

template <typename T>
void easyfind(T &values, int element)
{
	std::cout << "Checking if the value '"<< element <<"' exists" << std::endl;

	if (std::find(values.begin(), values.end(), element) != values.end())
		std::cout << "Found!" << std::endl;
	else
		std::cout << "Element was not found!" << std::endl;
}

#endif