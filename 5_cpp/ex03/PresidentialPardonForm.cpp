/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 21:03:06 by snpark            #+#    #+#             */
/*   Updated: 2022/01/26 21:42:36 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form(target, 25, 5)
{
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor)	const
			throw (std::exception, Form::GradeTooLowException, Form::NotSignedExcption)
{
	executable(executor);
	std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy)
{
	(void)copy;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
	(void)copy;
	return (*this);
}
