/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:08:15 by snpark            #+#    #+#             */
/*   Updated: 2022/02/14 16:30:33 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int	main(void)
{
	Span a(5);
	
	try
	{
		a.addNumber(17);
		a.addNumber(42);
		a.addNumber(-99);
		a.addNumber(0);
		a.addNumber(-21);
		a.addNumber(111111);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		std::cout << a.shortestSpan() << '\n';  
		std::cout << a.longestSpan() << '\n';  
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		Span b(1);
		
		b.addNumber(1);
		std::cout << b.shortestSpan() << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		Span c(0);
		
		std::cout << c.shortestSpan() << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
}
