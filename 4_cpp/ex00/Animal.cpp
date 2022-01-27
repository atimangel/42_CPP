/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:18:44 by snpark            #+#    #+#             */
/*   Updated: 2022/01/21 10:42:16 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() :
	type("Animal")
{
	std::cout << "Animal Default constructor\n";
}

Animal::~Animal()
{
	std::cout << "Animal Destructor\n";
}

void	Animal::makeSound() const
{
	std::cout << type << ": Sigh(animal's breath)\n";
}

const std::string	&Animal::getType() const
{
	return (type);
}
