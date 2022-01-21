/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:13:08 by snpark            #+#    #+#             */
/*   Updated: 2022/01/21 08:41:31 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor\n";
	_name = "anonymous";
	for (int i=0; i < 4; ++i)
		_inventory[i] = nullptr;
	_equiped_materia = 0;
}

Character::~Character()
{
	std::cout << "Character default destructor\n";
	for (int i = 0; i < 4; ++i)
		if (_inventory[i] != nullptr)
			delete _inventory[i];
}

Character::Character(std::string name)
{
	std::cout << "Character " << name << " constructor\n";
	_name = name;
	for (int i=0; i < 4; ++i)
		_inventory[i] = nullptr;
	_equiped_materia = 0;
}

Character::Character(Character const & copy)
{
	std::cout << "Character copy constructor\n";
	*this = copy;
}

Character	&Character::operator=(const Character &copy)
{
	std::cout << "Character assignment operator\n";
	_name = copy._name; 
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i] != nullptr)
			delete _inventory[i];
		if (copy._inventory[i] != nullptr)
			_inventory[i] = copy._inventory[i]->clone();
	}
	_equiped_materia = copy._equiped_materia;
	return (*this);
}

std::string const &Character::getName()	const
{
	return (_name);
}

void		Character::equip(AMateria *m)
{
	if (_equiped_materia < 4)
	{
		for (int i = 0; i < 4; ++i)
			if (_inventory[i] == nullptr)
			{
				_inventory[i] = m;
				++_equiped_materia;
				std::cout << "[" << i << "] equip " << m->getType() << "\n";
				return ;
			}
	}
	else
		std::cout << "inventroy is full\n";
}

void		Character::unequip(int idx)
{
	if (_inventory[idx] != nullptr)
	{
		_inventory[idx] = nullptr;
		--_equiped_materia;
	}
	else
		std::cout << "[" << idx << "] inventroy is empty\n";
}

void		Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx] != nullptr)
		_inventory[idx]->use(target);
	else
		std::cout << "[" << idx << "] inventroy is empty\n";
}
