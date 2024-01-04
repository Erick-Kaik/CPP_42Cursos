/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:29:23 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/03 13:08:33 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fix_pointer = 0;
}

Fixed::Fixed(const int value_int)
{
    std::cout << "Int constructor called" << std::endl;
    this->fix_pointer = (int)(value_int << this->bitshiting);
}

Fixed::Fixed(const float value_float)
{
    std::cout << "Float constructor called" << std::endl;
    this->fix_pointer = (int)roundf(value_float * (1 << this->bitshiting));
}

Fixed::Fixed(const Fixed &fix)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fix;
}

Fixed &Fixed::operator=(const Fixed &fix)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fix)
        this->fix_pointer = fix.getRawBits();
    return *this;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fix_pointer;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fix_pointer = raw;
}

float Fixed::toFloat( void ) const { return (float)((float)this->getRawBits() / (1 << this->bitshiting)); }

int Fixed::toInt( void ) const { return (int)(this->fix_pointer >> this->bitshiting); }

std::ostream &operator<<(std::ostream &os, const Fixed &fix)
{
    os << fix.toFloat();
    return os;
}
