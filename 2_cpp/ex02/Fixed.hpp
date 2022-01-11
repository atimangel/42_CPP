/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:48:45 by snpark            #+#    #+#             */
/*   Updated: 2022/01/11 10:03:50 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <ostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int const value);
		Fixed(float const value);
		/*copy constructor*/
		Fixed(const Fixed & copy);

		~Fixed(void);
		/*assignment operator*/
		Fixed 	&operator=(Fixed const & copy);
		/*arithmetic operator*/
		Fixed	operator+(Fixed const &arg)	const;
		Fixed	operator-(Fixed const &arg)	const;
		Fixed	operator*(Fixed const &arg)	const;
		Fixed	operator/(Fixed const &arg)	const;
		/*comparsion operator*/
		bool	operator>(Fixed const &arg);
		bool	operator<(Fixed const &arg);
		bool	operator>=(Fixed const &arg);
		bool	operator<=(Fixed const &arg);
		bool	operator==(Fixed const &arg);
		bool	operator!=(Fixed const &arg);

		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed const	operator++(int);
		Fixed const	operator--(int);

		static Fixed	&max(Fixed &arg1, Fixed &arg2);
		static Fixed	&min(Fixed &arg1, Fixed &arg2);
		static Fixed const	max(Fixed const &arg1, Fixed const &arg2);
		static Fixed const	min(Fixed const &arg1, Fixed const &arg2);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void)	const;
		int		toInt(void)		const;
	private:
		int					_fixed_point_value;
		static const int	_fractional_bit;	
};

std::ostream&	operator<<(std::ostream& os, Fixed const & copy);
#endif
