/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:56:26 by snpark            #+#    #+#             */
/*   Updated: 2022/01/20 17:37:33 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		AMateria* clone() const;
		void	use(ICharacter& target);
	private:
		Cure(Cure const &copy);
		Cure &operator=(Cure const &copy);
};

#endif
