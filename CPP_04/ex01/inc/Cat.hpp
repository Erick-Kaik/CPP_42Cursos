/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:41:26 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/23 15:41:28 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#define RESET "\033[0m"
#define YELLOW "\033[33m"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat &cat);
		Cat &operator=(const Cat &cat);
		~Cat();
	
		void MakeSound() const;
		std::string getType() const;
		void display(size_t n) const;
	private:
		Brain *_brain;
};

#endif