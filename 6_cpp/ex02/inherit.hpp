/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inherit.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:28:59 by snpark            #+#    #+#             */
/*   Updated: 2022/02/04 14:29:00 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INHERIT_HPP
# define INHERIT_HPP

class Base
{
	public:
		virtual	~Base() {};
};

class A : public Base
{
};

class B : public Base
{
};

class C :public Base
{
};
#endif
