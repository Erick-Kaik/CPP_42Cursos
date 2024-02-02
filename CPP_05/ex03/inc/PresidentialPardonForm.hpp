/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:49:39 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/01 08:59:37 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &presidentialPardonForm);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &presidentialPardonForm);
		~PresidentialPardonForm();

		void execute(Bureaucrat const &executor) const;
	private:
		std::string _target;
};

#endif
