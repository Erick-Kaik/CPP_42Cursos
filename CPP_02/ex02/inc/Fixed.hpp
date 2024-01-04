/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:24:57 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/03 12:02:41 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed(const int value_int);
        Fixed(const float value_float);
        Fixed(const Fixed &fix);
        Fixed &operator=(const Fixed &fix);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat( void ) const;
        int toInt( void ) const;

        bool operator>(Fixed const &fix);        
        bool operator>=(Fixed const &fix);
        bool operator<(Fixed const &fix);
        bool operator<=(Fixed const &fix);
        bool operator==(Fixed const &fix);
        bool operator!=(Fixed const &fix);

        Fixed operator+(Fixed const &fix);        
        Fixed operator-(Fixed const &fix);
        Fixed operator*(Fixed const &fix);
        Fixed operator/(Fixed const &fix);

        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);

        static Fixed &min(Fixed &v1, Fixed &v2);
        static Fixed const &min(Fixed const &v1, Fixed const &v2);
        static Fixed &max(Fixed &v1, Fixed &v2);
        static Fixed const &max(Fixed const &v1, Fixed const &v2);
    private:
        int fix_pointer;
        static const int bitshiting = 8; 
};

std::ostream &operator<<(std::ostream &os, const Fixed &fix);

#endif