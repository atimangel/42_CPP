/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:18:52 by snpark            #+#    #+#             */
/*   Updated: 2022/01/19 16:55:36 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & copy);
		WrongAnimal & operator=(WrongAnimal const & copy);
		virtual ~WrongAnimal();
		void	makeSound()	const;
		const std::string	&getType()	const;
	protected:
		std::string type;
};

#endif
