/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:10:16 by snpark            #+#    #+#             */
/*   Updated: 2022/01/17 09:25:22 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void)
	: ClapTrap()
{
	_hitpoints = S_HP;
	_energy_points = S_EP;
	_attack_damage = S_AD;
	std::cout << _name << " work for Scav Gang (ScavTrap constructed)"<< std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	_hitpoints = S_HP;
	_energy_points = S_EP;
	_attack_damage = S_AD;
	std::cout << _name << " work for Scav Gang (ScavTrap constructed)"<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	_name = copy._name;
	_hitpoints = copy._hitpoints;
	_attack_damage = copy._attack_damage;
	_energy_points = copy._energy_points;
	std::cout << _name << " work for Scav Gang (ScavTrap constructed)"<< std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	_name = copy._name;
	_hitpoints = copy._hitpoints;
	_attack_damage = copy._attack_damage;
	_energy_points = copy._energy_points;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << _name << " leave Scav Gang (ScavTrap Destructed)" << std::endl; 
}

void	ScavTrap::guardGate(void)
{
	std::cout << _name << " say \"YOU SHALL NOT PASS!\" (" << _name << " guard gate)" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << _name << " attack " << target
		<< ", causing " << _attack_damage << " points of damage!" << std::endl;
}
