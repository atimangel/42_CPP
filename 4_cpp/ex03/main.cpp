/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:16:20 by snpark            #+#    #+#             */
/*   Updated: 2022/01/21 11:04:18 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int		main(void)
{
	std::cout <<"\n";
	IMateriaSource* src = new MateriaSource();

	std::cout <<"\n";
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout <<"\n";
	ICharacter* me = new Character("me");
	std::cout <<"\n";
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout <<"\n";

	ICharacter* bob = new Character("bob");

	std::cout <<"\n";
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout <<"\n";
	delete bob;
	std::cout <<"\n";
	delete me;
	std::cout <<"\n";
	delete src;

	std::cout << "\n\n----------\n";
	me = new Character("me");
	bob = new Character("bob");

	std::cout << "\n<use empty materia>\n";
	me->use(0, *bob);

	std::cout << "\n<unequip empty materia>\n";
	me->unequip(0);

	std::cout << "\n<equip 5 materia>\n";
	me->equip(new Cure());
	me->equip(new Cure());
	me->equip(new Cure());
	me->equip(new Cure());
	Cure cure;
	me->equip(&cure);

	std::cout << "\n<lean 5 materia>\n";
	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(&cure);

	std::cout << "\n<unknown materia>\n";
	src->createMateria("cure");

	std::cout <<"\n";
	delete me;
	std::cout <<"\n";
	delete bob;
	std::cout <<"\n";
	return 0;
}
