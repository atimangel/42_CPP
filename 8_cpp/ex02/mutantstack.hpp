/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:35:55 by snpark            #+#    #+#             */
/*   Updated: 2022/02/14 17:48:38 by snpark           ###   ########.fr       */
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

	iterator	begin() _NOEXCEPT
	{
		return this->c.begin();
	}

	iterator	end()	_NOEXCEPT
	{
		return this->c.end();
	}

	const_iterator	cbegin() _NOEXCEPT
	{
		return this->c.cbegin();
	}

	const_iterator	cend()	_NOEXCEPT
	{ 
		return this->c.cend();
	}

	reverse_iterator	rbegin() _NOEXCEPT
	{ 
		return this->c.rbegin();
	}

	reverse_iterator	rend()	_NOEXCEPT
	{
		return this->c.rend();
	}

	const_reverse_iterator	crbegin() _NOEXCEPT
	{
		return this->c.crbegin();
	}

	const_reverse_iterator	crend()	_NOEXCEPT
	{
		return this->c.crend();
	}

	MutantStack() {}
	MutantStack(MutantStack const &copy) {*this = copy;}
	~MutantStack() {}
	MutantStack &operator=(MutantStack const &copy)
	{
		std::stack<T, Container>::operator=(copy);
		return (*this);
	}		
};
