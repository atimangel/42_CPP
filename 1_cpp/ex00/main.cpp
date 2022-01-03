/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 10:19:04 by snpark            #+#    #+#             */
/*   Updated: 2022/01/02 13:54:00 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	 Zombie		*zombie_1 = newZombie("tony stark");

	 zombie_1->anounce();
	 delete	zombie_1;
	 randomChump("steve rogers");
}
