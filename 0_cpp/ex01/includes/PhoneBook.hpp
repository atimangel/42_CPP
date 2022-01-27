/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 11:00:43 by snpark            #+#    #+#             */
/*   Updated: 2022/01/27 16:35:15 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
# define PHONE_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "./Contact.hpp"
#define	WIDTH 20

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
		bool	is_open(void);
		void	search(void);
	private:
	/*member data*/
		const int		_max;
		bool			_open;
		int				_index;
		Contact			_list[8];
	/*member function*/
		void	_make_space(void);
		void	_add_contact(void);
		void	_search_by_index(int index);
		void	_print_column(std::string column);
};
#endif
