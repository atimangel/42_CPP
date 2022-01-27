/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:35:53 by snpark            #+#    #+#             */
/*   Updated: 2022/01/27 15:57:45 by snpark           ###   ########.fr       */
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
	std::cout << '\n';
	man.executeForm(desert);
	std::cout << '\n';

	man.signForm(desert);
	man.executeForm(desert);
	std::cout << '\n';

	RobotomyRequestForm	brain_in_jar("rainy");
	std::cout << '\n';

	baby.signForm(brain_in_jar);
	baby.executeForm(brain_in_jar);
	std::cout << '\n';

	man.executeForm(brain_in_jar);
	std::cout << '\n';

	man.signForm(brain_in_jar);
	man.executeForm(brain_in_jar);
	std::cout << '\n';
	
	PresidentialPardonForm	marx("karl");
	
	baby.signForm(marx);
	baby.executeForm(marx);
	std::cout << '\n';

	man.executeForm(marx);
	std::cout << '\n';

	man.signForm(marx);
	man.executeForm(marx);
	std::cout << '\n';
}
