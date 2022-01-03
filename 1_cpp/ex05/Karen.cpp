/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:38:44 by snpark            #+#    #+#             */
/*   Updated: 2022/01/03 17:09:21 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

const std::string	Karen::_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Karen::Karen(void)
{
	Karen::action[0] = &Karen::debug;
	Karen::action[1] = &Karen::info;
	Karen::action[2] = &Karen::warning;
	Karen::action[3] = &Karen::error;
	Karen::action[4] = &Karen::null;
}

Karen::~Karen(void)
{
}

int		Karen::getLevel(std::string level)
{
	int	i = 0;

	while (i < 4 && level != _level[i])
		++i;
	return (i);
}

void	Karen::complain(std::string level)
{
	(this->*action[getLevel(level)])();
}

void	Karen::debug(void)
{
	std::cout << KAREN_DEBUG << std::endl;
}

void	Karen::info(void)
{
	std::cout << KAREN_INFO << std::endl;
}

void	Karen::warning(void)
{
	std::cout << KAREN_WARNING << std::endl;
}

void	Karen::error(void)
{
	std::cout << KAREN_ERROR << std::endl;
}

void	Karen::null(void)
{
	std::cout << "incorrect level" << std::endl;
}
