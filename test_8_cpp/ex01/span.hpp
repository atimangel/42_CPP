/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:08:49 by snpark            #+#    #+#             */
/*   Updated: 2022/02/14 16:31:05 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <set>
# include <exception>
# include <climits>

class Span
{
	public:
		class CannotAdd : public std::exception
		{
			char const * what() const throw ()
			{
				return ("span instance is full, can't add number");
			}
		};
		class CannotGetSpan: public std::exception
		{
			char const * what() const throw ()
			{
				return ("can't measure span");
			}
		};
		Span(unsigned int N) : _capacity(N) {}
		~Span() {}
		void			addNumber(int n);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
	private:
		std::multiset<int>	_data;
		unsigned int		_capacity;
		Span() {}
};
#endif
