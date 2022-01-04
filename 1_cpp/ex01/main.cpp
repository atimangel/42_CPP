/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 14:37:40 by snpark            #+#    #+#             */
/*   Updated: 2022/01/05 08:53:58 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static void	anounce_all(Zombie *horde, int N)
{
	for (int i = 0; i < N; ++i)
		horde[i].anounce();
}

int	main(void)
{
	Zombie	*in_hospital;
	Zombie	*in_north;

	in_hospital = zombieHorde(12, "Doctor Who");
	anounce_all(in_hospital, 12);
	delete [] in_hospital;
	in_north = zombieHorde(7, "toothless");
	anounce_all(in_north, 7);
	delete [] in_north;
}
