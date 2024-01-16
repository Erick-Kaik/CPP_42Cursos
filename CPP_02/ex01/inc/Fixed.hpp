/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:29:21 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/03 11:09:16 by ekaik-ne         ###   ########.fr       */
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
    private:
        int fix_pointer;
        static const int bitshiting = 8; 
};

std::ostream &operator<<(std::ostream &os, const Fixed &fix);

#endif