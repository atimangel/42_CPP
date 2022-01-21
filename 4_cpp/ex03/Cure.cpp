/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:06:50 by snpark            #+#    #+#             */
/*   Updated: 2022/01/21 08:40:43 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() :
	AMateria("cure")
{
	std::cout << "Cure default constructor\n";
}

Cure::~Cure()
{
	std::cout << "Cure default destructor\n";
}

AMateria* Cure::clone() const
{
	std::cout << "clone Cure materia\n";
	return (new Cure);
}

Cure::Cure(Cure const &copy) :
	AMateria("cure")
{
	(void)copy;
}

Cure &Cure::operator=(const Cure &copy)
{
	(void)copy;
	return (*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
