/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:10:13 by snpark            #+#    #+#             */
/*   Updated: 2022/01/20 17:36:52 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>

class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(std::string const &type);
		virtual ~AMateria();

		std::string	const & getType()	const;

		virtual	AMateria* clone() const = 0;
		virtual	void	use(ICharacter& target);
	protected:
		std::string	_type;
		AMateria(AMateria const &copy);
		AMateria	&operator=(AMateria const &copy);
};
#endif
