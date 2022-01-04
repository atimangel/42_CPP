/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 16:28:12 by snpark            #+#    #+#             */
/*   Updated: 2022/01/04 09:33:04 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

Weapon HumanA::_default_weapon("sling");

HumanA::HumanA(void) : _weapon(_default_weapon)
{
}

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _weapon.getType()
		<< std::endl; 
}
