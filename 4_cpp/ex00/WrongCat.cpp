/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:51:20 by snpark            #+#    #+#             */
/*   Updated: 2022/01/21 10:43:32 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "Cat";
	std::cout << "WrongCat Default constructor\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Default destructor\n";
}

void	WrongCat::makeSound() const
{
	std::cout << type << ": Meow\n";
}
