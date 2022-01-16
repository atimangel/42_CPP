/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:59:48 by snpark            #+#    #+#             */
/*   Updated: 2022/01/16 10:19:28 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	Name = "_clap_name";
	_hitpoints = FragTrap::_hitpoints;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << _name << " ScavTrap FragTrap FUSION!!! (DiamondTrap constructed)" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name)
{
	Name = name + "_clap_name";
	_hitpoints = FragTrap::_hitpoints;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << _name << " ScavTrap FragTrap FUSION!!! (DiamondTrap constructed)" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & copy)
{
	_name = copy._name;
	Name = copy.Name;
	_hitpoints = copy._hitpoints;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	std::cout << _name << " ScavTrap FragTrap FUSION!!! (DiamondTrap constructed)" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << _name << " Fusion time over (DiamondTrap destructed)" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &copy)
{
	_name = copy._name;
	Name = copy.Name;
	_hitpoints = copy._hitpoints;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	return (*this);
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I AM " << Name << std::endl;
}

