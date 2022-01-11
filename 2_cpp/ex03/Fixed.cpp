/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:48:40 by snpark            #+#    #+#             */
/*   Updated: 2022/01/11 10:14:03 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
# include <cmath>
#include "Fixed.hpp"

/* ************************************************************************** */
/*static const member value initailize*/
const int	Fixed::_fractional_bit = 8;
/* ************************************************************************** */
/*constructor*/
Fixed::Fixed(void) : _fixed_point_value(0) {}

Fixed::Fixed(const int value)
{
	_fixed_point_value = value << _fractional_bit;
}

Fixed::Fixed(const float value)
{
	_fixed_point_value = roundf(value * 0x100);
}

Fixed::Fixed(const Fixed & copy)
{
	*this = copy;
}
/* ************************************************************************** */
/*destructor*/
Fixed::~Fixed(void) {}
/* ************************************************************************** */
/*assignment operator*/
Fixed &	Fixed::operator=(Fixed const & copy)
{
	this->setRawBits(copy.getRawBits());
	return *this;
}
/* ************************************************************************** */
/*getter*/
int		Fixed::toInt(void)		const
{
	return (_fixed_point_value >> 8);
}

float	Fixed::toFloat(void)	const
{
	return ((float)_fixed_point_value / 0x100);
}

int	Fixed::getRawBits(void)	const
{
	return _fixed_point_value;
}
/* ************************************************************************** */
/*setter*/
void	Fixed::setRawBits(const int raw)
{
	_fixed_point_value = raw;
}
/* ************************************************************************** */
/*arithmetic operator*/
Fixed	Fixed::operator+(Fixed const &arg) const
{
	return (this->toFloat() + arg.toFloat());
}

Fixed	Fixed::operator-(Fixed const &arg) const
{
	return (this->toFloat() - arg.toFloat());
}

Fixed	Fixed::operator*(Fixed const &arg) const
{
	return (this->toFloat() * arg.toFloat());
}

Fixed	Fixed::operator/(Fixed const &arg) const
{
	if (arg.getRawBits() == 0)
	{
		std::cout << *this << '/' << arg << '=' << "inf" << std::endl;
		exit(1);
	}
	return (this->toFloat() / arg.toFloat());
}
/* ************************************************************************** */
/*comparsion operator*/
bool	Fixed::operator>(Fixed const &arg)
{
	return (_fixed_point_value > arg.getRawBits());
}

bool	Fixed::operator<(Fixed const &arg)
{
	return (_fixed_point_value < arg.getRawBits());
}

bool	Fixed::operator>=(Fixed const &arg)
{
	return (_fixed_point_value >= arg.getRawBits());
}

bool	Fixed::operator<=(Fixed const &arg)
{
	return (_fixed_point_value <= arg.getRawBits());
}

bool	Fixed::operator==(Fixed const &arg)
{
	return (_fixed_point_value == arg.getRawBits());
}

bool	Fixed::operator!=(Fixed const &arg)
{
	return (_fixed_point_value != arg.getRawBits());
}
/* ************************************************************************** */
/*increment and decrement operators*/
Fixed	&Fixed::operator++(void)
{
	++_fixed_point_value;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	--_fixed_point_value;
	return (*this);
}

Fixed const	Fixed::operator++(int)
{
	Fixed const	copy(*this);

	++_fixed_point_value;
	return (copy);
}

Fixed const	Fixed::operator--(int)
{
	Fixed const	copy(*this);

	--_fixed_point_value;
	return (copy);
} 
/* ************************************************************************** */
Fixed &Fixed::max(Fixed &arg1, Fixed &arg2)
{
	if (arg1 >= arg2)
		return (arg1);
	else
		return (arg2);
}

Fixed &Fixed::min(Fixed &arg1, Fixed &arg2)
{
	if (arg1 <= arg2)
		return (arg1);
	else
		return (arg2);
}

Fixed const	Fixed::max(Fixed const &arg1, Fixed const &arg2)
{
	if (arg1.toFloat() >= arg2.toFloat())
		return (arg1);
	else
		return (arg2);
}

Fixed const	Fixed::min(Fixed const &arg1, Fixed const &arg2)
{
	if (arg1.toFloat() <= arg2.toFloat())
		return (arg1);
	else
		return (arg2);
}
/* ************************************************************************** */
std::ostream&	operator<<(std::ostream& os, const Fixed & copy)
{
	return (os << copy.toFloat());
}
