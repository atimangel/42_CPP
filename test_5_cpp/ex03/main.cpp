/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:35:53 by snpark            #+#    #+#             */
/*   Updated: 2022/01/27 13:50:18 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Form	*paper = nullptr;
	Intern	magnae;

	paper = magnae.makeForm("robotomy request", "rat");
	std::cout << *paper << "\n\n";
	delete paper;

	paper = magnae.makeForm("presidential pardon", "marx");
	std::cout << *paper << "\n\n";
	delete paper;

	paper = magnae.makeForm("shrubbery creation", "marx");
	std::cout << *paper << "\n\n";
	delete paper;

	paper = magnae.makeForm("resignation letter", "magnae");
}
