/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:56:14 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/27 17:49:03 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main()
{
    Harl harl;

    harl.complain("info");
    harl.complain("error");
    harl.complain("warning");
    harl.complain("debug");
    harl.complain("asdas");
    
    return 0;
}
