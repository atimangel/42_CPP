/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 12:28:26 by snpark            #+#    #+#             */
/*   Updated: 2022/01/15 18:44:11 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) :
	ClapTrap()
{
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << _name <<
		" is reprogrammed by Hyperion as Interplantary Ninja Assassin ClaTrap (FragTrap constructed)"
		<< std::endl;
}

FragTrap::FragTrap(std::string name) :
	ClapTrap(name)
{
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << _name <<
		" is reprogrammed by Hyperion as Interplantary Ninja Assassin ClaTrap (FragTrap constructed)"
		<< std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	_name = copy._name;
	_hitpoints = copy._hitpoints;
	_attack_damage = copy._attack_damage;
	_energy_points = copy._energy_points;
	std::cout << _name <<
		" is reprogrammed by Hyperion as Interplantary Ninja Assassin ClaTrap (FragTrap constructed)"
		<< std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy)
{
	_name = copy._name;
	_hitpoints = copy._hitpoints;
	_attack_damage = copy._attack_damage;
	_energy_points = copy._energy_points;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << _name << " is doing Factory Reset (FragTrap Destructed)" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << _name << ": GIVE ME FIVE" << std::endl;
}
