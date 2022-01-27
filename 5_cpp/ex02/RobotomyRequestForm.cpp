/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 21:06:43 by snpark            #+#    #+#             */
/*   Updated: 2022/01/26 21:44:11 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form(target, 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor)	const
			throw (std::exception, Form::GradeTooLowException, Form::NotSignedExcption)
{
	executable(executor);
	std::cout << "drrrrrrrr....\n";
	bool coin = rand() % 2;
	if (coin == true)
		std::cout << this->getName() << " is robotomized successfully\n";
	else
		std::cout << "well... " << this->getName() << " didn't make it\n";
}

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy)
{
	(void)copy;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &copy)
{
	(void)copy;
	return (*this);
}
