/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:35:18 by snpark            #+#    #+#             */
/*   Updated: 2022/02/14 17:20:18 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <vector>
#include <list>
#include <iostream>

int	main(void)
{
	std::cout << "	<<int & vector>>\n";
	try
	{
		MutantStack<int, std::vector<int>> a;
		a.push(10);
		a.push(77);
		a.push(42);

		std::cout << "top: " << a.top() << '\n';
		a.pop();
		std::cout << "top: " << a.top() << '\n';

		a.push(111);
		a.push(-987);
		a.push(0);
		a.push(INT_MIN);
		a.push(INT_MAX);
		MutantStack<int, std::vector<int>>::iterator it = a.begin();
		MutantStack<int, std::vector<int>>::iterator end = a.end();

		for (;it != end; ++it)
			std::cout << *it << '\n';
		std::cout << "last: " << *--it << '\n';
		std::stack<int, std::vector<int>> b(a);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "\n	<<int & list>>\n";
	try
	{
		MutantStack<int, std::list<int>> a;
		a.push(10);
		a.push(77);
		a.push(42);

		std::cout << "top: " << a.top() << '\n';
		a.pop();
		std::cout << "top: " << a.top() << '\n';

		a.push(111);
		a.push(-987);
		a.push(0);
		a.push(INT_MIN);
		a.push(INT_MAX);
		MutantStack<int, std::list<int>>::iterator it = a.begin();
		MutantStack<int, std::list<int>>::iterator end = a.end();

		for (;it != end; ++it)
			std::cout << *it << '\n';
		std::cout << "last: " << *--it << '\n';
		std::stack<int, std::list<int>> b(a);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "\n	<<int & deque>>\n";
	try
	{
		MutantStack<int> a;
		a.push(10);
		a.push(77);
		a.push(42);

		std::cout << "top: " << a.top() << '\n';
		a.pop();
		std::cout << "top: " << a.top() << '\n';

		a.push(111);
		a.push(-987);
		a.push(0);
		a.push(INT_MIN);
		a.push(INT_MAX);
		MutantStack<int>::iterator it = a.begin();
		MutantStack<int>::iterator end = a.end();

		for (;it != end; ++it)
			std::cout << *it << '\n';
		std::cout << "last: " << *--it << '\n';
		std::stack<int> b(a);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
}
