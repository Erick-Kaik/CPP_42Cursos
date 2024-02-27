/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:54:06 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/26 11:01:04 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

int main(void)
{
	int arrayInt[] = {1, 2, 3, 4, 5};
    int lenArrayInt = sizeof(arrayInt) / sizeof(int);

    std::cout << "Iterando sobre inteiros: ";
    iter(arrayInt, lenArrayInt, printElement<int>);
    std::cout << std::endl;

    double arrayDouble[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int lenArrayDouble = sizeof(arrayDouble) / sizeof(double);

    std::cout << "Iterando sobre números decimais: ";
    iter(arrayDouble, lenArrayDouble, printElement<double>);
    std::cout << std::endl;

	std::string arrayString[] = {std::string("Teste1"), std::string("Teste2"), std::string("Teste3")};
	int lenString = sizeof(arrayString) / sizeof(std::string);
	iter(arrayString, lenString, printElement<std::string>);
	std::cout << std::endl;

	return 0;
}
