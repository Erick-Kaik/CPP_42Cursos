/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:42:19 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/15 16:14:31 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serialization.hpp"

Serialization::Serialization() { }

Serialization::Serialization(Serialization &serialization) { *this = serialization; }

Serialization &Serialization::operator=(const Serialization &serialization)
{
	if (this != &serialization)
		return *this;
	return *this;
}

Serialization::~Serialization() { }

uintptr_t Serialization::serialize(Data *ptr) { return reinterpret_cast<uintptr_t>(ptr); }

Data *Serialization::deserialize(uintptr_t raw) { return reinterpret_cast<Data *>(raw); }

