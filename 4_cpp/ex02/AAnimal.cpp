/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:18:44 by snpark            #+#    #+#             */
/*   Updated: 2022/01/19 21:12:30 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() :
	type("AAnimal")
{
	std::cout << "AAnimal Default constructor\n";
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor\n";
}

const std::string	&AAnimal::getType() const
{
	return (type);
}
