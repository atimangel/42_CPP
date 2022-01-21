/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:51:20 by snpark            #+#    #+#             */
/*   Updated: 2022/01/19 20:42:54 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	_brain = new Brain();
	std::cout << "Cat Default constructor\n";
}

Cat::Cat(Cat const &copy)
{
	_brain = new Brain();
	for (int i = 0; i < 100; ++i)
		_brain->ideas[i] = copy._brain->ideas[i];
	std::cout << "Cat Copy constructor\n";
}

Cat	&Cat::operator=(const Cat &copy)
{
	delete _brain;
	_brain = new Brain(); 
	for (int i = 0; i < 100; ++i)
		_brain->ideas[i] = copy._brain->ideas[i];
	std::cout << "ASSIGN OPERATOR\n";
	std::cout << "origin Brain pointer " << (void *)copy._brain << '\n';
	std::cout << "assign Brain pointer " << (void *)_brain << '\n';

	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat Default destructor\n";
}

void	Cat::makeSound() const
{
	std::cout << "Cat: Meow\n";
}
