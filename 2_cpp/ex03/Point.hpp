/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 08:34:27 by snpark            #+#    #+#             */
/*   Updated: 2022/01/11 15:47:42 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(float x, float y);
		Point(Point const &copy);
		Point(Fixed const &x, Fixed const &y);

		~Point(void);

		Point operator=(Point const &copy);

		Point operator-(Point const &copy) const;
		Fixed operator*(Point const &copy) const;
		Fixed determinant(Point const &arg) const;

		Fixed x(void)	const;
		Fixed y(void)	const;
	private:
		Fixed const _x;
		Fixed const _y;
		Fixed		adjust_x;
};
#endif
