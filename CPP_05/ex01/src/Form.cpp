/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:32:21 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/23 16:48:11 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

Form::Form(const std::string name, const int gradeSigned, const int gradeExecute) : _name(name), _gradeSigned(gradeSigned), _gradeExecute(gradeExecute)
{
	this->_signed = false;
}
Form::Form(Form &form) : _name(form._name), _gradeSigned(form._gradeSigned), _gradeExecute(form._gradeExecute)
{
	*this = form;
}
Form &Form::operator=(const Form &form)
{

}
Form::~Form()
{

}