/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 15:50:11 by snpark            #+#    #+#             */
/*   Updated: 2022/01/04 09:35:05 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon(void)
{
}

void	Weapon::setType(std::string weapon)
{
	_type = weapon;
}

std::string	const	&Weapon::getType(void)
{
	return (_type);
}

