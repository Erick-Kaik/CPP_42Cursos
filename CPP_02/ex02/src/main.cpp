/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:25:01 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/03 12:14:33 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));

    std::cout << "1° -> " << a << std::endl;
    std::cout << "2° -> " << ++a << std::endl;
    std::cout << "3° -> " << a << std::endl;
    std::cout << "4° -> " << a++ << std::endl;
    std::cout << "5° -> " << a << std::endl;
    std::cout << "6° -> " << b << std::endl;
    std::cout << "7° -> " << Fixed::max( a, b ) << std::endl;
    return 0;
}
