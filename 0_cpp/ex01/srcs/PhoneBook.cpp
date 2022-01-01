/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 10:31:56 by snpark            #+#    #+#             */
/*   Updated: 2022/01/01 11:58:44 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _max(8), _open(true), _index(0)
{
}

PhoneBook::~PhoneBook(void)
{
}

bool	PhoneBook::status(void)
{
	return (_open);
}

void	PhoneBook::open(void)
{
	_open = true;
}

void	PhoneBook::close(void)
{
	_open = false;
}

void
	PhoneBook::_add_contact(void)
{
	std::string	buffer;

	std::cout << "First Name : ";
	std::getline(std::cin, buffer);
	_list[_index].setFirstName(buffer);

	std::cout << "Last Name : ";
	std::getline(std::cin, buffer);
	_list[_index].setLastName(buffer);

	std::cout << "Nick Name : ";
	std::getline(std::cin, buffer);
	_list[_index].setNickName(buffer);

	std::cout << "Phone Number : ";
	std::getline(std::cin, buffer);
	_list[_index].setPhoneNumber(buffer);

	std::cout << "tell me your secret: ";
	std::getline(std::cin, buffer);
	_list[_index].setSecret(buffer);
	++_index;
}

void	PhoneBook::add(void)
{
	if (_index == _max)
		std::cout << "PhoneBook is FULL" << std::endl;
	else
		_add_contact();
}

void	PhoneBook::_print_column(std::string column)
{
	std::cout << '|';
	if (column.length() > 10)
		std::cout << column.substr(0, 9) << '.';
	else
		std::cout << std::setw(10) << column;
}

void	PhoneBook::_search_by_index(int index)
{
	if (index >= _index)
		std::cout << index << " index is EMPTY" << std::endl;
	else
	{
		std::cout << "index: " << index << std::endl;
		std::cout << "first name: " << _list[index].firstName() << std::endl;
		std::cout << "last name: " << _list[index].lastName() << std::endl;
		std::cout << "nick name: " << _list[index].nickName() << std::endl;
		std::cout << "phone number: " << _list[index].phoneNumber() << std::endl;
		std::cout << "secret: " << _list[index].secret() << std::endl;
	}
}

void	PhoneBook::search(void)
{
	int		index;

	std::cout << "---------------------------------------------\n";
	std::cout << '|' << std::setw(10) << "index  " << '|'
		<< std::setw(10) << "first name" << '|'
		<< std::setw(10) << "last name" << '|'
		<< std::setw(10) << "nick name" << '|' << std::endl;
	std::cout << "---------------------------------------------\n";
	for (int i = 0; i < _index; ++i)
	{
		std::cout << '|';
		std::cout << std::setw(10) << i;
		_print_column(_list[i].firstName());
		_print_column(_list[i].lastName());
		_print_column(_list[i].nickName());
		std::cout << '|' << std::endl;
	}
	std::cout << "---------------------------------------------\n";
	std::cout << "serch by index: ";
	while (std::scanf("%d", &index) != 1)
	{
		while (getchar() != '\n');
		std::cout << "type number" << std::endl;
		std::cout << "serch by index: ";
	}
	getchar();
	_search_by_index(index);
}
