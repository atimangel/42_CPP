/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 21:56:16 by snpark            #+#    #+#             */
/*   Updated: 2022/02/07 14:27:35 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
template<typename T>
void	iter(T *array, int array_length, void (*func)(T))
{
	for (int i = 0; i < array_length; ++i)
		(*func)(array[i]);
}
#endif
