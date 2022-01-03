/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 15:50:17 by snpark            #+#    #+#             */
/*   Updated: 2022/01/02 16:44:44 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class	Weapon
{
	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		std::string	const	&getType(void);
		void	setType(std::string weapon);
	private:
		std::string	_type;
};

#endif
