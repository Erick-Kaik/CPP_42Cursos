/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:56:28 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/02 17:25:00 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;
    std::cout << "First Stage" << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    std::cout << "Second Stage" << std::endl;
    a.setRawBits(10);
    std::cout << a.getRawBits() << std::endl;
    b.setRawBits(8);
    std::cout << b.getRawBits() << std::endl;
    c.setRawBits(-42);
    std::cout << c.getRawBits() << std::endl;
    return (0);
}