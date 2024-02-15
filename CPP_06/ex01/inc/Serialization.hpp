/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:42:22 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/15 16:35:06 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include "Data.hpp"
#include <stdint.h>


class Serialization
{
	public:
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
		
	private:
		Serialization();
		Serialization(Serialization &serialization);
		Serialization &operator=(const Serialization &serialization);
		~Serialization();
};

#endif