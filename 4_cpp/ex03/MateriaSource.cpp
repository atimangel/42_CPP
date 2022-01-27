/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:04:09 by snpark            #+#    #+#             */
/*   Updated: 2022/01/21 11:04:53 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor\n";
	for (int i=0; i < 4; ++i)
		_source[i] = nullptr;
	_stock = 0;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource default destructor\n";
	for (int i = 0; i < 4; ++i)
		if (_source[i] != nullptr)
			delete _source[i];
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	std::cout << "MateriaSource copy constructor\n";
	*this = copy;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &copy)
{
	std::cout << "MateriaSource assignment operator\n";
	for (int i = 0; i < _stock; ++i)
	{
		delete _source[i];
		_source[i] = copy._source[i]->clone();
	}
	_stock = copy._stock;
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *m)
{
	if (_stock >= 4)
		std::cout << "source is full\n";
	else
	{
		std::cout << "[" << _stock << "] learn " << m->getType() << "\n"; 
		_source[_stock++] = m;
	}
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < _stock; ++i)
		if (_source[i]->getType() == type)
		{
			std::cout << "create " << _source[i]->getType() << " materia\n";
			return (_source[i]->clone());
		}
	std::cout << "unknown type [" << type << "]\n";
	return (0);
}
