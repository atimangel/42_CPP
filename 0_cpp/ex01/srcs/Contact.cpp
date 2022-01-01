/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 18:38:48 by snpark            #+#    #+#             */
/*   Updated: 2022/01/01 11:30:19 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::setFirstName(std::string const first_name)
{
	_first = first_name;
}

void	Contact::setLastName(std::string const last_name)
{
	_last = last_name;
}

void	Contact::setNickName(std::string const nickname)
{
	_nickname = nickname;
}

void	Contact::setPhoneNumber(std::string const phone_number)
{
	_phone = phone_number;
}

void	Contact::setSecret(std::string const secret)
{
	_secret = secret;
}

std::string		Contact::firstName()	const
{
	return (_first);
}

std::string		Contact::lastName()		const
{
	return (_last);
}

std::string		Contact::nickName()		const
{
	return (_nickname);
}

std::string		Contact::phoneNumber()	const
{
	return (_phone);
}

std::string		Contact::secret()		const
{
	return (_secret);
}
