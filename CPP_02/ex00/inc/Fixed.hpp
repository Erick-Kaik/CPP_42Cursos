/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:56:35 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/03 11:09:16 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &fix);
        Fixed &operator=(const Fixed &fix);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);
    private:
        int fix_pointer;
        static const int bitshiting = 8; 
};

#endif