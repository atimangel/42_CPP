/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:19:43 by snpark            #+#    #+#             */
/*   Updated: 2022/02/07 12:03:35 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
template<typename T>
void	swap(T &a, T &b)
{
	T	tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
T	const & min(T const &a, T const &b)
{
	return (a < b ? a : b);
}

template<typename T>
T	const & max(T const &a, T const &b)
{
	return (a > b ? a : b);
}
#endif
