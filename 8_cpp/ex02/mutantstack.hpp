/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:35:55 by snpark            #+#    #+#             */
/*   Updated: 2022/02/14 17:40:45 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <deque>

template< class T, class Container = std::deque<T> >
class	MutantStack : public std::stack<T, Container>
{
	public:
	typedef typename
		std::stack<T, Container>::container_type::iterator
		iterator;
	typedef typename
		std::stack<T, Container>::container_type::const_iterator
		const_iterator;
	typedef typename
		std::stack<T, Container>::container_type::reverse_iterator
		reverse_iterator;
	typedef typename
		std::stack<T, Container>::container_type::const_reverse_iterator
		const_reverse_iterator;

	iterator	begin() _NOEXCEPT	{ return std::stack<T, Container>::c.begin();};
	iterator	end()	_NOEXCEPT	{ return std::stack<T, Container>::c.end();};
	iterator	cbegin() _NOEXCEPT	{ return std::stack<T, Container>::c.cbegin();};
	iterator	cend()	_NOEXCEPT	{ return std::stack<T, Container>::c.cend();};
	iterator	rbegin() _NOEXCEPT	{ return std::stack<T, Container>::c.rbegin();};
	iterator	rend()	_NOEXCEPT	{ return std::stack<T, Container>::c.rend();};
	iterator	crbegin() _NOEXCEPT	{ return std::stack<T, Container>::c.crbegin();};
	iterator	crend()	_NOEXCEPT	{ return std::stack<T, Container>::c.crend();};

	MutantStack() {}
	MutantStack(MutantStack const &copy) {*this = copy;}
	~MutantStack() {}
	MutantStack &operator=(MutantStack const &copy)
	{
		std::stack<T, Container>::operator=(copy);
		return (*this);
	}		
};
