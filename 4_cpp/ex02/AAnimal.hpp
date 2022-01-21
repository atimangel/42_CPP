/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:18:52 by snpark            #+#    #+#             */
/*   Updated: 2022/01/19 21:12:23 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(AAnimal const & copy);
		AAnimal & operator=(AAnimal const & copy);
		virtual ~AAnimal();
		virtual void	makeSound()	const = 0;
		const std::string	&getType()	const;
	protected:
		std::string type;
};

#endif
