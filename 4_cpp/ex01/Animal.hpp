/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:18:52 by snpark            #+#    #+#             */
/*   Updated: 2022/01/19 16:28:52 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(Animal const & copy);
		Animal & operator=(Animal const & copy);
		virtual ~Animal();
		virtual void	makeSound()	const;
		const std::string	&getType()	const;
	protected:
		std::string type;
};

#endif
