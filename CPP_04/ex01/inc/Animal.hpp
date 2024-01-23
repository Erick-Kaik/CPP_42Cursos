/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:41:16 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/23 15:41:18 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(Animal &animal);
		Animal &operator=(const Animal &animal);
		virtual ~Animal();

		virtual void MakeSound() const;
		virtual std::string getType() const;
		virtual void display(size_t n) const;
	protected:
		std::string type;

};

#endif