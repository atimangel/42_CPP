/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:27:30 by snpark            #+#    #+#             */
/*   Updated: 2022/01/20 17:23:04 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(MateriaSource const &copy);
		MateriaSource	&operator=(MateriaSource const &copy);

		void		learnMateria(AMateria *m);
		AMateria*	createMateria(std::string const & type);
	private:
		AMateria	*_source[4];
		int			_stock;
};

#endif
