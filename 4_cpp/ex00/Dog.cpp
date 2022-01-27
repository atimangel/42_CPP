/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:18:45 by snpark            #+#    #+#             */
/*   Updated: 2022/01/21 10:42:46 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog Default constructor\n";
}

Dog::~Dog()
{
	std::cout << "Dog Default destructor\n";
}

void	Dog::makeSound() const
{
	std::cout << type << ": woof\n";
}
