/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:51:20 by snpark            #+#    #+#             */
/*   Updated: 2022/01/19 16:56:49 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat Default constructor\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Default destructor\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat: Meow\n";
}
