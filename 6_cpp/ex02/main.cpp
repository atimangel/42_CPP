/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:42:28 by snpark            #+#    #+#             */
/*   Updated: 2022/02/02 21:27:20 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inherit.hpp"
#include <iostream>
#include <cstdlib>

Base *	generate()
{
	srand(time(nullptr));
	int	seed = rand() % 3;
	switch (seed)
	{
		case 0:
			return (dynamic_cast<Base*>(new A()));
		case 1:
			return (dynamic_cast<Base*>(new B()));
		case 2:
			return (dynamic_cast<Base*>(new C()));
	}
	return (nullptr); 
}

void	identify(Base* p)
{
	A	*a;
	B	*b;
	C	*c;

	//virtual??
	a = dynamic_cast<A*>(p);
	if (a)
		std::cout << "A\n";
	b = dynamic_cast<B*>(p);
	if (b)
		std::cout << "B\n";
	c = dynamic_cast<C*>(p);
	if (c)
		std::cout << "C\n";
}
//https://en.cppreference.com/w/cpp/language/dynamic_cast
void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A\n";
	}
	catch (std::bad_cast &e) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B\n";
	}
	catch (std::bad_cast &e) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C\n";
	}
	catch (std::bad_cast &e) {}
}

int	main(void)
{
	Base	*ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete	ptr;
}
