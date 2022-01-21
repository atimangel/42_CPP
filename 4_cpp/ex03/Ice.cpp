/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:15:04 by snpark            #+#    #+#             */
/*   Updated: 2022/01/21 08:36:06 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() :
	AMateria("ice")
{
	std::cout << "Ice default constructor\n";
}

Ice::~Ice()
{
	std::cout << "Ice default destructor\n";
}

AMateria* Ice::clone() const
{
	std::cout << "clone Ice materia\n";
	return (new Ice);
}

Ice::Ice(Ice const &copy) :
	AMateria("ice")
{
	(void)copy;
}

Ice &Ice::operator=(const Ice &copy)
{
	(void)copy;
	return (*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoot an ice bolt at " << target.getName()<< " *\n";
}
