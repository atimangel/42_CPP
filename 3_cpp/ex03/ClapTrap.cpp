/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:38:46 by snpark            #+#    #+#             */
/*   Updated: 2022/01/17 09:22:20 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	_hitpoints(C_HP),
	_energy_points(C_EP),
	_attack_damage(C_AD)
{
	std::cout << "ClapTrap " << _name << " is turn on" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hitpoints(C_HP),
	_energy_points(C_EP),
	_attack_damage(C_AD)
{
	std::cout << "ClapTrap " << _name << " is turn on" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energy_points = copy._energy_points;
	this->_attack_damage = copy._attack_damage;
	std::cout << "ClapTrap " << _name << " is turn on" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &copy)
{
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energy_points = copy._energy_points;
	this->_attack_damage = copy._attack_damage;
	std::cout << "ClapTrap " << _name << " copy his mind" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " is turn off" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << _name << " attack " << target
	<< ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int	damage = amount; 

	if (_hitpoints <= amount)
	{
		damage = _hitpoints;
		_hitpoints = 0;
	}
	else
		_hitpoints -= damage;
	std::cout << _name << " take " << damage 
		<< " points of damage! HP: " << _hitpoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	_hitpoints += amount;
	std::cout << _name << " is repaired "
		<< amount << " points! HP: " << _hitpoints << std::endl;
}
