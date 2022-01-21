/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:16:20 by snpark            #+#    #+#             */
/*   Updated: 2022/01/21 10:33:18 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int		main(void)
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	std::cout << "\n\n----------\n";
	me = new Character("me");
	bob = new Character("bob");
	std::cout << "use empty materia\n";
	me->use(0, *bob);
	std::cout << "unequip empty materia\n";
	me->unequip(0);
	std::cout << "equip 5 materia\n";
	me->equip(new Cure());
	me->equip(new Cure());
	me->equip(new Cure());
	me->equip(new Cure());
	Cure cure;
	me->equip(&cure);
	std::cout << "lean 5 materia\n";
	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(&cure);
	std::cout << "unknown materia\n";
	src->createMateria("cure");

	delete me;
	delete bob;
	return 0;
}
