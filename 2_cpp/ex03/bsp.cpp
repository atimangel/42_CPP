/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 09:46:08 by snpark            #+#    #+#             */
/*   Updated: 2022/01/11 15:59:06 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed det_1((point - a).determinant(c - a));
	Fixed det_2((point - b).determinant(a - b));
	Fixed det_3((point - c).determinant(b - c));
	
	if (det_1 > 0 && det_2 > 0 && det_3 > 0)
		return (true);
	else if (det_1 < 0 && det_2 < 0 && det_3 < 0)
		return (true);
	return (false);
}

//bool	bsp(Point const a, Point const b, Point const c, Point const point)
//{
//	Point v1(a - c);
//	Point v2(b - c);
//	Point p(point - c);
//	Fixed determinant(v1.determinant(v2)); 
//	Fixed alpha;
//	Fixed beta;
//
//	if (determinant.toFloat() == 0.0f)
//	{
//		std::cout << "This is not triangle" << std::endl;
//		return (false);
//	}
//	alpha = Point(v2.y(), v2.x() * -1) * p / determinant;
//	//alpha = (p.x() * v2.y() - p.y() * v2.x()) / determinant;
//	beta = Point(v1.y() * -1, v1.x()) * p / determinant;
//	//beta = (v1.x() * p.y() - p.x() * v1.y())/ determinant;
//	if (alpha > 0 && alpha < 1 &&
//			beta > 0 && beta < 1 &&
//			alpha + beta > 0 && alpha + beta < 1)
//		return (true);
//	if (alpha == 0 || beta == 0 || alpha + beta == 1)
//		std::cout << "Point is on line" << std::endl;
//	return (false);
//}
