/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:48:45 by snpark            #+#    #+#             */
/*   Updated: 2022/01/11 07:13:48 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed & copy);//copy constructor
		~Fixed(void);
		Fixed	&operator=(Fixed const & copy);//assignment operator
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_fixed_point_value;
		static const int	_fractional_bit;	
};

#endif
