/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 08:40:01 by snpark            #+#    #+#             */
/*   Updated: 2022/01/27 16:38:49 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

static void		anounce(void)
{
	std::cout << "---------------------"
		<< std::endl;
	std::cout << '|' << "Available commands " << '|' << std::endl;
	std::cout << "---------------------"
		<< std::endl;
	std::cout << '|' << "ADD | SEARCH | EXIT" << '|' << std::endl;
	std::cout << "---------------------\n"
		<< std::endl;
}

int				main(void)
{
	PhoneBook	book;
	std::string	command;

	book.open();
	anounce();
	std::cout.setf(std::ios_base::left);
	while (book.is_open())
	{
		std::cout << std::setw(WIDTH) << "command" << ": ";
		if (!std::getline(std::cin, command))
			book.close();
		if (command == "ADD")
			book.add();
		else if (command == "SEARCH")
			book.search();
		else if (command == "EXIT")
			book.close();
		else
			std::cout << command << ": is not a command" << std::endl;
		std::cout << '\n';
	}
	std::cout << "PhoneBook close" << std::endl;
}
