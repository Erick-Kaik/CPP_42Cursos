/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:27:56 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/12 18:24:09 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char const *argv[])
{
	std::string aux;
	std::string ret;

	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	for (int i = 1; i < argc; i++)
	{
		aux = argv[i];
		for (size_t j = 0; j < aux.size(); j++)
			ret += toupper(aux[j]);
		aux.clear();
	}
	std::cout << ret << std::endl;
	
	return (0);
}
