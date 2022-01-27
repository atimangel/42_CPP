/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:35:53 by snpark            #+#    #+#             */
/*   Updated: 2022/01/26 21:33:13 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	ShrubberyCreationForm	desert("sahara");
	Bureaucrat	baby("baby", 150);
	Bureaucrat	man("man", 1);


	baby.signForm(desert);
	baby.executeForm(desert);

	man.executeForm(desert);

	man.signForm(desert);
	man.executeForm(desert);

	RobotomyRequestForm	brain_in_jar("rainy");

	baby.signForm(brain_in_jar);
	baby.executeForm(brain_in_jar);

	man.executeForm(brain_in_jar);

	man.signForm(brain_in_jar);
	man.executeForm(brain_in_jar);
	PresidentialPardonForm	marx("karl");
	
	baby.signForm(marx);
	baby.executeForm(marx);

	man.executeForm(marx);

	man.signForm(marx);
	man.executeForm(marx);
}
