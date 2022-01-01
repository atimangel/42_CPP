/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 08:40:01 by snpark            #+#    #+#             */
/*   Updated: 2022/01/01 12:01:06 by snpark           ###   ########.fr       */
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
	std::cout << "---------------------"
		<< std::endl;
}

int				main(void)
{
	PhoneBook	book;
	std::string	command;

	anounce();
	book.open();
	while (book.status())
	{
		std::cout << "command: ";
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
	}
	std::cout << "PhoneBook close" << std::endl;
}
