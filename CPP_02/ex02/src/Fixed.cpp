/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:24:59 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/03 12:18:14 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed() { this->fix_pointer = 0; }

Fixed::Fixed(const int value_int) { this->fix_pointer = (int)(value_int << this->bitshiting); }

Fixed::Fixed(const float value_float) { this->fix_pointer = (int)roundf(value_float * (1 << this->bitshiting)); }

Fixed::Fixed(const Fixed &fix) { *this = fix; }

Fixed &Fixed::operator=(const Fixed &fix)
{
    if (this != &fix)
        this->fix_pointer = fix.getRawBits();
    return *this;
}

Fixed::~Fixed() { }

int Fixed::getRawBits(void) const { return this->fix_pointer; }

void Fixed::setRawBits(int const raw) { this->fix_pointer = raw; }

float Fixed::toFloat( void ) const { return (float)((float)this->getRawBits() / (1 << this->bitshiting)); }

int Fixed::toInt( void ) const { return (int)(this->fix_pointer >> this->bitshiting); }

std::ostream &operator<<(std::ostream &os, const Fixed &fix)
{
    os << fix.toFloat();
    return os;
}

bool Fixed::operator>(Fixed const &fix) { return (this->toFloat() > fix.toFloat() ? true : false); }

bool Fixed::operator>=(Fixed const &fix) { return (this->toFloat() >= fix.toFloat() ? true : false); }

bool Fixed::operator<(Fixed const &fix) { return (this->toFloat() < fix.toFloat() ? true : false); }

bool Fixed::operator<=(Fixed const &fix) { return (this->toFloat() <= fix.toFloat() ? true : false); }

bool Fixed::operator==(Fixed const &fix) { return (this->toFloat() == fix.toFloat() ? true : false); }

bool Fixed::operator!=(Fixed const &fix) { return (this->toFloat() != fix.toFloat() ? true : false); }


Fixed Fixed::operator+(Fixed const &fix) { return (this->toFloat() + fix.toFloat()); }

Fixed Fixed::operator-(Fixed const &fix) { return (this->toFloat() - fix.toFloat()); }

Fixed Fixed::operator*(Fixed const &fix) { return (this->toFloat() * fix.toFloat()); }

Fixed Fixed::operator/(Fixed const &fix) { return (this->toFloat() / fix.toFloat()); }


Fixed &Fixed::operator++(void)
{
    ++this->fix_pointer;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed aux = *this;
    ++fix_pointer;
    return aux;
}
Fixed &Fixed::operator--(void)
{
    --this->fix_pointer;
    return *this;
}
Fixed Fixed::operator--(int)
{
    Fixed aux = *this;
    --fix_pointer;
    return aux;
}

Fixed &Fixed::min(Fixed &v1, Fixed &v2) { return (v1.toFloat() <= v2.toFloat() ? v1 : v2); }

Fixed const &Fixed::min(Fixed const &v1, Fixed const &v2) { return (v1.toFloat() <= v2.toFloat() ? v1 : v2); }

Fixed &Fixed::max(Fixed &v1, Fixed &v2) { return (v1.toFloat() >= v2.toFloat() ? v1 : v2); }

Fixed const &Fixed::max(Fixed const &v1, Fixed const &v2) { return (v1.toFloat() >= v2.toFloat() ? v1 : v2); }