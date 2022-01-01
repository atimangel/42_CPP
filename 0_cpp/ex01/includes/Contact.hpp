/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 18:34:13 by snpark            #+#    #+#             */
/*   Updated: 2022/01/01 11:31:26 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
	public:
		/*constructor*/
		Contact(void);
		/*distryctor*/
		~Contact(void);
	/*member function*/
		/*manipulator || setter*/
		void	setFirstName(std::string const first_name);
		void	setLastName(std::string const last_name);
		void	setNickName(std::string const nickname);
		void	setPhoneNumber(std::string const phone_number);
		void	setSecret(std::string const secret);
		/*accessor || getter*/
		std::string firstName()		const;
		std::string lastName()		const;
		std::string nickName()		const;
		std::string phoneNumber()	const;
		std::string secret()		const;
	private:
	/*member data*/
		std::string _first;
		std::string _last;
		std::string _nickname;
		std::string _phone;
		std::string _secret;
};
#endif
