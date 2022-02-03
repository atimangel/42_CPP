/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:29:48 by snpark            #+#    #+#             */
/*   Updated: 2022/01/31 16:47:40 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please enter one argumant\n";
		return (1);
	}
	try
	{
		Convert c(argv[1]);
		c.printAll();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
}
