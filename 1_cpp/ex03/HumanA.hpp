/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 16:28:10 by snpark            #+#    #+#             */
/*   Updated: 2022/01/04 09:33:17 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA(void);
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void	attack(void);
	private:
		std::string		_name;
		Weapon			&_weapon;
		static Weapon	_default_weapon;
};

#endif
