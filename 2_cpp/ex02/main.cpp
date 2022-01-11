/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:48:28 by snpark            #+#    #+#             */
/*   Updated: 2022/01/11 10:03:24 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}
//	Fixed		a;
//	Fixed		b(1);
//	std::cout << (a == a) << std::endl;
//	std::cout << (b == a) << std::endl;
//	std::cout << (a == b) << std::endl;
//	std::cout << (a != a) << std::endl;
//	std::cout << (b != a) << std::endl;
//	std::cout << (a != b) << std::endl;
//	std::cout << (a > a) << std::endl;
//	std::cout << (b > a) << std::endl;
//	std::cout << (a > b) << std::endl;
//	std::cout << (a < a) << std::endl;
//	std::cout << (b < a) << std::endl;
//	std::cout << (a < b) << std::endl;
//	std::cout << (a >= a) << std::endl;
//	std::cout << (b >= a) << std::endl;
//	std::cout << (a >= b) << std::endl;
//	std::cout << (a <= a) << std::endl;
//	std::cout << (b <= a) << std::endl;
//	std::cout << (a <= b) << std::endl;
//
//	Fixed		a;
//	Fixed		b(1);
//	Fixed		c(0.25f);
//	Fixed		d(10);
//	Fixed		e(-10);
//	Fixed		f(-1);
//	Fixed		g(-0.25f);
//
//	std::cout << a + b + c + d << std::endl;
//	std::cout << a + e + f + g << std::endl;
//	std::cout << a - b - c - d << std::endl;
//	std::cout << a - e - f - g << std::endl;
//	std::cout << a * b << std::endl;
//	std::cout << a * f << std::endl;
//	std::cout << d * b << std::endl;
//	std::cout << d * f << std::endl;
//	std::cout << g * g << std::endl;
//	std::cout << g * c << std::endl;
//	std::cout << b / f << std::endl;
//	std::cout << c / c << std::endl;
//	std::cout << e / e << std::endl;
//	std::cout << b / a << std::endl;
