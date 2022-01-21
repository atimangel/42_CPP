/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:16:20 by snpark            #+#    #+#             */
/*   Updated: 2022/01/19 20:37:47 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main(void)
{
	std::cout << "VIRTUAL DESTRUCTOR\n";
	const	Animal*	i = new Dog();
	const	Animal* j = new Cat();

	delete	j;
	delete	i;
	std::cout << "\n\n\n\n";

	std::cout << "ARRAY\n";
	const	Animal *	array[10];

	for (int i = 0; i < 5; ++i)
	{
		array[i] = new Dog;
		array[5 + i] = new Cat;
	}
	for (int i = 0; i < 10; ++i)
		delete array[i];
	std::cout << "\n\n\n\n";

	std::cout << "DEEP COPY\n";
	Cat a;
	Cat b;
	b = a;
}
