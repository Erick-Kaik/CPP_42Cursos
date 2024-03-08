/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:47:20 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/03/08 16:40:19 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.hpp"

int main(void)
{
	std::time_t timer = std::time(0);
	int base = static_cast<int>(timer);
	std::srand(base);
	std::vector<int> data;
	
	std::cout << "Values from the List Below:" << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		data.push_back(rand() % 20);
		std::cout << data[i] << std::endl;
	}

	easyfind(data, (rand() % 20));
}
