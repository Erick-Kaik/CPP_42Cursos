/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:38:04 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/13 16:13:30 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{ 
	public:
		PhoneBook();
		~PhoneBook();
		
		void AddContact();
		void DisplayContact();
		
	private:
		int		list;
		Contact	contatos[8];

		bool FieldsValid(const std::string &str);
};

#endif