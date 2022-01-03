/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 10:19:28 by snpark            #+#    #+#             */
/*   Updated: 2022/01/02 14:39:56 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	public :
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void	setName(std::string name);
		void	anounce(void);
	private :
		std::string	_name;
};
Zombie*	zombieHorde(int N, std::string name);
#endif
