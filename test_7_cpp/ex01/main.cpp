/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:17:34 by snpark            #+#    #+#             */
/*   Updated: 2022/02/07 14:56:58 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template<typename T>
void	add_and_print(T unit)
{
	std::cout << unit << " >> ";
	unit += 1;
	std::cout << unit << '\n'; 
}

int	main(void)
{
	std::cout << "int array iter\n";
	int	a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	::iter(a, 10, &add_and_print);

	std::cout << "float array iter\n";
	float	b[5] = {9.8, 7.6, 5.4, 3.2, 1.0};
	::iter(b, 5, &add_and_print);
	
	std::cout << "char array iter\n";
	char	c[12] = {'a', 'b', 'c', 'd', '1', '2', '3', '4', 'A', 'B', 'C', 'D'};
	::iter(c, 12, &add_and_print);
}
