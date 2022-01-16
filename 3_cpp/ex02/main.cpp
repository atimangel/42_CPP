/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:57:11 by snpark            #+#    #+#             */
/*   Updated: 2022/01/16 10:28:06 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap inac("INAC");

	inac.highFivesGuys();
	inac.attack("EARTH");
	inac.takeDamage(10);
	inac.beRepaired(9);
	inac.attack("AIR");
	inac.attack("WATER");
	inac.takeDamage(100);
	inac.beRepaired(77);
	inac.highFivesGuys();
}
