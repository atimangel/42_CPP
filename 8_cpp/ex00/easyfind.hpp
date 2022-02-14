/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:22:05 by snpark            #+#    #+#             */
/*   Updated: 2022/02/14 13:06:34 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iterator>
# include <exception>
# include <iostream>

class NotFound : public std::exception
{
	const char * what() const throw()
	{
		return ("unit not found in container");
	}
};

template<typename T>
int	easyfind(T const & container, int unit)
{
	auto const result_iter = std::find(container.begin(), container.end(), unit);

	return (result_iter != container.end() ? *result_iter : throw NotFound());
}

#endif
