/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 15:40:22 by snpark            #+#    #+#             */
/*   Updated: 2022/01/02 15:47:36 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string		*stringPTR = &string;
	std::string		&stringREF = string;

	std::cout << "string's address: " << &string << std::endl;
	std::cout << "address by pointer: " << stringPTR << std::endl;
	std::cout << "address by refrence: " << &stringREF << std::endl;
	std::cout << "print by pointer: " << *stringPTR << std::endl;
	std::cout << "print by refrence: " << stringREF << std::endl;
}
