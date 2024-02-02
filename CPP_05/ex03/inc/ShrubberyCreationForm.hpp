/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:14:10 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/31 13:16:36 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRYBBERTCREATIONFORM_HPP
# define SHRYBBERTCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &shrubberyCreationForm);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shrubberyCreationForm);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const &executor) const;
	private:
		std::string _target;
};


#endif