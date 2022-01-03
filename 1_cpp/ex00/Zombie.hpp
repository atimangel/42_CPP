/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 10:19:28 by snpark            #+#    #+#             */
/*   Updated: 2022/01/02 13:55:58 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	public :
		Zombie(std::string name);
		~Zombie(void);
		void	anounce(void);
	private :
		Zombie(void);
		std::string	_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
#endif
