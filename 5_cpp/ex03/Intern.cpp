/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:59:05 by snpark            #+#    #+#             */
/*   Updated: 2022/01/27 13:43:57 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Form	*Intern::makeForm(std::string form_name, std::string target)
{
	Form	*paper = nullptr;
	try
	{
		switch (Form::typeToId(form_name))
		{
			case 0:
				paper = new PresidentialPardonForm(target);
				break;
			case 1:
				paper = new RobotomyRequestForm(target);
				break;
			case 2:
				paper = new ShrubberyCreationForm(target);
		}
		std::cout << "Intern creats " << form_name << '\n';
	}
	catch (Form::CannotFindFileType &e)
	{
		std::cout << "Intern " << e.what() << '\n'; 
	}
	return paper;
}

Intern::Intern() {}
Intern::~Intern() {}
Intern::Intern(Intern const &copy)
{
	(void)copy;
}

Intern	&Intern::operator=(const Intern &copy)
{
	(void)copy;
	return (*this);
}
