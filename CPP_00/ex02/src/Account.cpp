/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:45:05 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/14 09:00:59 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Account.hpp"

int	getIndex(void)
{
	static int 	index = -1;

	index++;
	return (index);
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = getIndex();
}

Account::~Account(void)
{
	
}