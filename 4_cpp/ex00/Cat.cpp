/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:51:20 by snpark            #+#    #+#             */
/*   Updated: 2022/01/21 10:42:34 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat Default constructor\n";
}

Cat::~Cat()
{
	std::cout << "Cat Default destructor\n";
}

void	Cat::makeSound() const
{
	std::cout << type << ": Meow\n";
}
