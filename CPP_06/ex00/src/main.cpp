/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:56:25 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/07 17:17:20 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"


int main(int argc, char const *argv[])
{
	if (argc != 2)
		std::cout << "send at least one argument to program functionality" << std::endl;
	else
		ScalarConverter::convert(argv[1]);
	return 0;
}
