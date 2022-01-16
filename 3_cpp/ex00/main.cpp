/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:57:11 by snpark            #+#    #+#             */
/*   Updated: 2022/01/14 20:11:22 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	old("CLP4P-TP");

	old.attack("Handsome Jack");
	old.takeDamage(1);
	old.beRepaired(1);
	old.takeDamage(20);
	old.beRepaired(20);
}
