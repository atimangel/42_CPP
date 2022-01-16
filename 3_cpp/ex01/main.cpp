/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:57:11 by snpark            #+#    #+#             */
/*   Updated: 2022/01/14 20:27:57 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scav("SC4V-TP");

	scav.attack("R2D2");
	scav.guardGate();
	scav.takeDamage(10);
	scav.beRepaired(10);
	scav.takeDamage(200);
	scav.beRepaired(199);
}
