/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:03:21 by snpark            #+#    #+#             */
/*   Updated: 2022/02/04 15:52:17 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <limits>
#include <cmath>

Convert::Convert()
{
	_type = NO_TYPE;
	_value = 0;
	if (Convert::verbose)
		std::cout << "Convert Default constructor called\n";
}

Convert::~Convert()
{
	if (Convert::verbose)
		std::cout << "Convert destructor called\n";
}

Convert::Convert(Convert const &copy)
{
	if (Convert::verbose)
		std::cout << "Convert Copy constructor called\n";
	*this = copy;
}

Convert	&Convert::operator=(const Convert &copy)
{
	if (Convert::verbose)
		std::cout << "Convert Assignment operator called\n";
	(void)copy;
	return (*this);
}

Convert::Convert(char const * const source)
{
	if (Convert::verbose)
		std::cout << "Convert costructor with source called\n";
	if (source[0] == 0)
		throw EmptyInput();
	if (!this->getType(source))
		throw CannotDetctType();
}

bool	Convert::getType(char const * const source)
{
	char	*end;
	
	_value = std::strtod(source, &end);
	if (end[0] == 'f' && end != source)
		_type = FLOAT;
	else if (source[1] == '\0' && std::isprint(source[0]) && !std::isdigit(source[0]))
	{
		_type = CHAR;
		_value = static_cast<double>(source[0]);
		return (true);
	}
	else if (end[0] != '\0')
		return (false);
	if (end && !std::strcmp(source, "."))
		_type = DOUBLE;
	else
		_type = INT;
	return (true);
}

bool	Convert::canConvertToChar()
{
	return (_value <= std::numeric_limits<char>::max() &&
			_value >= std::numeric_limits<char>::min() &&
			_value != std::numeric_limits<double>::infinity() &&
			_value != -std::numeric_limits<double>::infinity() &&
			_value != std::numeric_limits<double>::quiet_NaN());
}

void	Convert::printChar()
{
	std::cout << "char: ";
	if (!canConvertToChar())
		std::cout << "impossible\n";
	else if (!isprint(static_cast<char>(_value)))
		std::cout << "Non displayable\n";
	else
		std::cout << "'" << static_cast<char>(_value) << "'\n";
}

bool	Convert::canConvertToInt()
{
	return (_value <= std::numeric_limits<int>::max() &&
			_value >= std::numeric_limits<int>::min() &&
			_value != std::numeric_limits<double>::infinity() &&
			_value != -std::numeric_limits<double>::infinity() &&
			_value != std::numeric_limits<double>::quiet_NaN());
}

void	Convert::printInt()
{
	std::cout << "int: ";
	if (!canConvertToInt())
		std::cout << "impossible\n"; 
	else
		std::cout << static_cast<int>(_value) << '\n';
}

bool	Convert::canConvertToFloat()
{
	return ((_value <= std::numeric_limits<float>::max() &&
			_value >= -std::numeric_limits<float>::max()) ||
			_value == std::numeric_limits<double>::infinity() ||
			_value == -std::numeric_limits<double>::infinity() ||
			std::isnan(_value));
}

void	Convert::printFloat()
{
	std::cout << "float: ";
	if (!canConvertToFloat())
		std::cout << "impossible\n";
	else
	{
		std::cout.setf(std::ios_base::fixed);
		std::cout << static_cast<float>(_value) << "f\n";
	}
}

void	Convert::printDouble()
{
	std::cout.setf(std::ios_base::fixed);
	std::cout << "double: " << _value << '\n';
}

void	Convert::printAll()
{
	this->printChar();
	this->printInt();
	this->printFloat();
	this->printDouble();
}

bool	Convert::verbose = false;
