/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:59:48 by snpark            #+#    #+#             */
/*   Updated: 2022/01/17 09:28:22 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	ClapTrap::_name = "_clap_name";
	_hitpoints = F_HP;
	_energy_points = S_EP;
	_attack_damage = F_AD; 
	std::cout << _name << " ScavTrap FragTrap FUSION!!! (DiamondTrap constructed)" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name")
{
	_name = name;
	_hitpoints = F_HP;
	_energy_points = S_EP;
	_attack_damage = F_AD; 
	std::cout << _name << " ScavTrap FragTrap FUSION!!! (DiamondTrap constructed)" << std::endl;
	std::cout << "HP: " << _hitpoints << " |EP: " << _energy_points << " |AD: " << _attack_damage << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & copy)
{
	_name = copy._name;
	ClapTrap::_name = copy.ClapTrap::_name;
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
	ClapTrap::_name = copy.ClapTrap::_name;
	_hitpoints = copy._hitpoints;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I AM " << ClapTrap::_name << std::endl;
}

