/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:41:45 by snpark            #+#    #+#             */
/*   Updated: 2022/01/21 08:41:23 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor\n";
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria " << type << " constructor\n";
}

AMateria::~AMateria()
{
	std::cout << "AMateria default destructor\n";
} 

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
}

AMateria	&AMateria::operator=(const AMateria &copy)
{
	(void)copy;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "Nothing happen to " << target.getName() << std::endl;
}
