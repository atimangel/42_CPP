/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 21:00:01 by snpark            #+#    #+#             */
/*   Updated: 2022/01/28 17:33:36 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form(target, 145, 137)
{
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor)	const
			throw (std::exception, Form::GradeTooLowException, Form::FileOpenExcption, Form::FileOpenExcption)
{
	executable(executor);
	std::ofstream ofs;
	ofs.open(this->getName() + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
	if (ofs.fail())
		throw	FileOpenExcption();
	ofs << TREE;
	ofs.close();
}

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) :
	Form()
{
	(void)copy;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
	(void)copy;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

