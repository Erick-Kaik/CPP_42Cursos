/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:56:20 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/27 17:49:36 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl(void) { std::cout << "Harl is create" << std::endl; }

Harl::~Harl(void) { std::cout << "Harl is dead" << std::endl; }

void Harl::complain( std::string level )
{
    std::string levels[4] = {"debug", "info", "warning", "error"};
    void (Harl::*ptr_function[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (size_t i = 0; i < 5; i++)
    {
        if (i < 4 && level == levels[i])
        {
			(this->*ptr_function[i])();
            break ;
        }
        else if (i == 4)
            std::cout  << MAGENTA << "Harl does not accept this command" << RESET << std::endl;
    }
        
}

void Harl::debug(void) 
{
    std::cout << BLUE << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << RESET << std::endl;
}

void Harl::info(void)
{
    std::cout << GREEN << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
}

void Harl::warning(void)
{
    std::cout << YELLOW << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
}

void Harl::error(void)
{
    std::cout << RED << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}
