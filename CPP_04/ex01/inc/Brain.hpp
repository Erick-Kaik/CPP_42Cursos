/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:41:20 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/23 15:41:22 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

#define RESET "\033[0m"
#define PINK "\033[35m"

class Brain
{
	public:
		Brain();
		Brain(Brain &brain);
		Brain &operator=(const Brain &brain);
		virtual ~Brain();

		void createIdeas(std::string type);
		void displayIdeias(int n, std::string type);

	private:
		std::string ideas[100];

		int generateRandomNumber();
};

#endif