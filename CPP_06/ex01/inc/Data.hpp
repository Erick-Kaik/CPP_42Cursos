/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:53:50 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/15 16:23:22 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data
{
	public:
		Data(int intValue, std::string stringValue);
		Data(Data &data);
		Data &operator=(const Data &data);
		~Data();
		
		void displayData(void);
		int displayIntValue(void);
		std::string displayStringValue(void);
	private:
		int _intValue;
		std::string _stringValue;
};

#endif