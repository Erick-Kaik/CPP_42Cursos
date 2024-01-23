/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:41:30 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/23 15:41:31 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#define RESET "\033[0m"
#define BLUE "\033[34m"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog &dog);
		Dog &operator=(const Dog &dog);
		~Dog();
	
		void MakeSound() const;
		std::string getType() const;
		void display(size_t n) const;
	private:
		Brain *_brain;
};

#endif