/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 10:19:23 by snpark            #+#    #+#             */
/*   Updated: 2022/01/02 13:55:28 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie(void)
{
	std::cout << "Rest In peace " << _name << std::endl;
}

void	Zombie::anounce(void)
{
	std::cout << '<' << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
