/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:18:44 by snpark            #+#    #+#             */
/*   Updated: 2022/01/21 10:43:16 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() :
	type("Animal")
{
	std::cout << "WrongAnimal Default constructor\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor\n";
}

void	WrongAnimal::makeSound() const
{
	std::cout << type << ": Sigh(animal's breath)\n";
}

const std::string	&WrongAnimal::getType() const
{
	return (type);
}
