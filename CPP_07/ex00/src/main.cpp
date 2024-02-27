/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:43:23 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/22 16:53:55 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;
	

	::swap<int>(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min<int>(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max<int>(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap<std::string>(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min<std::string>(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max<std::string>(c, d) << std::endl;

	return 0;
}