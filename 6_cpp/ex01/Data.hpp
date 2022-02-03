/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:47:04 by snpark            #+#    #+#             */
/*   Updated: 2022/02/02 19:37:09 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <cstdint>
# include <iostream>

class Data
{
	public:
		static Data*		deserialization(uintptr_t raw);
		static uintptr_t	serialization(Data* ptr);	

		Data();
		~Data();
		Data(Data const &copy);
		Data	&operator=(Data const &copy);
		Data(std::string const &id, std::string const &organization);
		std::string const	getId()	const;
		std::string const	getOrganization()	const;
		void				setId(std::string const &id);
		void				setOrganization(std::string const &organization);
	private:
		std::string	_id;
		std::string	_organization;
		static const bool	verbose = true;
};

std::ostream	&operator<<(std::ostream &os, Data data);
#endif
