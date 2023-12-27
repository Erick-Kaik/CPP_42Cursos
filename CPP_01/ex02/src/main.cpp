/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:37:22 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/14 16:07:08 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "memory address" << std::endl;
	std::cout << "memory address: str = " << &str << std::endl;
	std::cout << "memory address: ptr = " << &ptr << std::endl;
	std::cout << "memory address: ref = " << &ref << std::endl;
	
	std::cout << "value of the string" << std::endl;
	std::cout << "value of the string: str = " << str << std::endl;
	std::cout << "value of the string: ptr = " << ptr << std::endl;
	std::cout << "value of the string: ref = " << ref << std::endl;


	return 0;
}
