/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:48:45 by snpark            #+#    #+#             */
/*   Updated: 2022/01/11 07:37:57 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <ostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed & copy);//copy constructor
		~Fixed(void);
		Fixed	&operator=(Fixed const & copy);//assignment operator
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void)	const;
		int		toInt(void)		const;
	private:
		int					_fixed_point_value;
		static const int	_fractional_bit;	
};

std::ostream&	operator<<(std::ostream& os, const Fixed & copy);
#endif
