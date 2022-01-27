/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:35:53 by snpark            #+#    #+#             */
/*   Updated: 2022/01/23 10:16:28 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>

int	main(void)
{
	try
	{
		Bureaucrat	top("top", 1);
		std::cout << top << '\n';
		top.decrement();
		std::cout << top << '\n';
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		Bureaucrat	bottom("bottom", 150);
		std::cout << bottom << '\n';
		bottom.increment();
		std::cout << bottom << '\n';
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		Bureaucrat	zero("zero", 0);
		std::cout << zero << '\n';
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		Bureaucrat	under("under", 151);
		std::cout << under << '\n';
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		Bureaucrat	cheap("cheap", 1);
		std::cout << cheap << '\n';
		cheap.increment();
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		Bureaucrat	bottom("bottom", 150);
		std::cout << bottom << '\n';
		bottom.decrement();
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << '\n';
	}
}
