/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:08:42 by snpark            #+#    #+#             */
/*   Updated: 2022/02/15 12:19:03 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void	Span::addNumber(int n)
{
	if (_data.size() >= _capacity)
		throw CannotAdd();
	_data.insert(n);
}

unsigned int	Span::shortestSpan()
{
	if (_data.size() < 2)
		throw CannotGetSpan();
	std::multiset<int>::iterator end = --_data.cend() ;

	int	shortest_val = INT_MAX;
	int	tmp_val;
	for (std::multiset<int>::iterator p = _data.cbegin(); p != end;)
	{
		tmp_val = -*p + *++p;
		if (tmp_val < shortest_val)
			shortest_val = tmp_val;
	}
	return (shortest_val);
}

#include <iostream>
unsigned int	Span::longestSpan()
{
	if (_data.size() < 2)
		throw CannotGetSpan();
	return (*(--_data.end()) - *(_data.begin()));
}
