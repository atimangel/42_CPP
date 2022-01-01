/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 11:00:43 by snpark            #+#    #+#             */
/*   Updated: 2022/01/01 11:58:30 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
# define PHONE_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "./Contact.hpp"

class PhoneBook
{
	public:
		/*constructor*/
		PhoneBook(void);
		/*distructor*/
		~PhoneBook(void);
	/*member function*/
		void	add(void);
		void	open(void);
		void	close(void);
		bool	status(void);
		void	search(void);
	private:
	/*member data*/
		const int		_max;
		bool			_open;
		int				_index;
		Contact			_list[8];
	/*member function*/
		void	_add_contact(void);
		void	_search_by_index(int index);
		void	_print_column(std::string column);
};
#endif
