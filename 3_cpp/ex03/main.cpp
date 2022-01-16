/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:57:11 by snpark            #+#    #+#             */
/*   Updated: 2022/01/15 20:53:53 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	shadowtrap("5H4DOW-TP");
	
	shadowtrap.whoAmI();
	shadowtrap.attack("his Identity");
	shadowtrap.takeDamage(999);
	shadowtrap.beRepaired(1);
	shadowtrap.guardGate();
	shadowtrap.highFivesGuys();
}
