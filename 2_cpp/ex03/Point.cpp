/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 08:33:56 by snpark            #+#    #+#             */
/*   Updated: 2022/01/11 15:47:37 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(float x, float y) : _x(x), _y(y) {}

Point::Point(Fixed const &x, Fixed const &y) : _x(x), _y(y) {}

Point::Point(Point const &copy) : _x(copy.x()), _y(copy.y()) {}

Point::~Point(void) {}

Point	Point::operator=(Point const &copy)
{
	return (copy);
}

Fixed	Point::x(void)	const 
{
	return (_x);
}

Fixed	Point::y(void)	const
{
	return (_y);
}

Point	Point::operator-(Point const &arg) const
{
	return (Point(this->x() - arg.x(), this->y() - arg.y()));
}

Fixed	Point::operator*(Point const &arg) const
{
	return (this->x() * arg.x() + this->y() * arg.y());
}

Fixed	Point::determinant(Point const &arg) const
{
	return (this->x() * arg.y() - this->y() * arg.x());
}
