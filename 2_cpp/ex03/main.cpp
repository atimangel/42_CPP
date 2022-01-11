/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:48:28 by snpark            #+#    #+#             */
/*   Updated: 2022/01/11 16:00:24 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point	a;
	Point	b(0, 2);
	Point	c(2, 0);
	Point	d(0.5f, 0.5f);
	Point	e(2, 2);

	std::cout << bsp(a, b, c, d) << std::endl;
	std::cout << bsp(a, b, c, a) << std::endl;
	std::cout << bsp(a, b, c, e) << std::endl;
	return 0;
}
