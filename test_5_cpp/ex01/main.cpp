/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:35:53 by snpark            #+#    #+#             */
/*   Updated: 2022/01/26 14:53:03 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>
#include "Form.hpp"

int	main(void)
{
	{
		Form	paper("no.150", 150, 150);
		Form	paper2("no.1", 1, 1);
		Bureaucrat	bob("bob", 150);

		bob.signForm(paper);
		std::cout << paper << '\n';
		bob.signForm(paper2);
		std::cout << paper2 << '\n';
	}
	{
		Form	paper("no.150", 150, 150);
		Form	paper2("no.1", 1, 1);
		Bureaucrat	james("james", 1);

		james.signForm(paper);
		std::cout << paper << '\n';
		james.signForm(paper2);
		std::cout << paper2 << '\n';
	}
	try
	{
		Form	zero("LAUNCH NUKE BOMBS! BABY!!!!", 0, 1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		Form	zero("COMMUNISM IS HERE!!!! BABY!!!!", 1, 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		Form	lunch("what is today's lunch?", 150, 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		Form	lunch("something RED would be nice", 151, 150);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
}
