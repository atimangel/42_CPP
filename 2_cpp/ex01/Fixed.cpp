/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:48:40 by snpark            #+#    #+#             */
/*   Updated: 2022/01/11 07:43:53 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include <ostream>
#include "Fixed.hpp"

const int	Fixed::_fractional_bit = 8;

Fixed::Fixed(void) : _fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_point_value = value << _fractional_bit;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed_point_value = roundf(value * 0x100);
}

Fixed::Fixed(const Fixed & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(copy.getRawBits());
	return *this;
}

int	Fixed::getRawBits(void)	const
{
	return _fixed_point_value;
}

void	Fixed::setRawBits(const int raw)
{
	_fixed_point_value = raw;
}

int		Fixed::toInt(void)		const
{
	return (_fixed_point_value >> 8);
}

float	Fixed::toFloat(void)	const
{
	return ((float)_fixed_point_value / 0x100);
}

std::ostream&	operator<<(std::ostream& os, const Fixed & copy)
{
	return (os << copy.toFloat());
}
