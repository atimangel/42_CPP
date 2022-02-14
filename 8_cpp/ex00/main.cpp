/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:22:00 by snpark            #+#    #+#             */
/*   Updated: 2022/02/14 13:15:43 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>
#include <deque>
#include <forward_list>
#include <list>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <vector>

int	main(void)
{
	int myints[] = { 10, 20, 30, 40 };
	std::cout << "<<vector>>\n";
	try
	{
		std::vector<int> myvector(myints, myints + 4);
		std::cout << easyfind(myvector, 10) << '\n';
		std::cout << easyfind(myvector, 20) << '\n';
		std::cout << easyfind(myvector, 1) << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "<<list>>\n";
	try
	{
		std::list<int> mylist(myints, myints + 4);

		std::cout << easyfind(mylist, 10) << '\n';
		std::cout << easyfind(mylist, 20) << '\n';
		std::cout << easyfind(mylist, 1) << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "<<forward_list>>\n";
	try
	{
		std::forward_list<int> my(myints, myints + 4);

		std::cout << easyfind(my, 10) << '\n';
		std::cout << easyfind(my, 20) << '\n';
		std::cout << easyfind(my, 1) << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "<<set>>\n";
	try
	{
		std::set<int> my(myints, myints + 4);

		std::cout << easyfind(my, 10) << '\n';
		std::cout << easyfind(my, 20) << '\n';
		std::cout << easyfind(my, 1) << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
}
