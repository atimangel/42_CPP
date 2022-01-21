/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:18:45 by snpark            #+#    #+#             */
/*   Updated: 2022/01/19 20:43:05 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	_brain = new Brain();
	std::cout << "Dog Default constructor\n";
}

Dog::Dog(Dog const &copy)
{
	_brain = new Brain();
	for (int i = 0; i < 100; ++i)
		_brain->ideas[i] = copy._brain->ideas[i];
	std::cout << "Dog Copy constructor\n";
}

Dog	&Dog::operator=(const Dog &copy)
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
Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog Default destructor\n";
}

void	Dog::makeSound() const
{
	std::cout << "Dog: woof\n";
}
