/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:00:27 by snpark            #+#    #+#             */
/*   Updated: 2022/02/02 20:33:40 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
	if (Data::verbose)
		std::cout << "Data Default constructor called\n";
}

Data::~Data()
{
	if (Data::verbose)
		std::cout << "Data destructor called\n";
}

Data::Data(std::string const &id, std::string const &organization) :
	_id(id),
	_organization(organization)
{
	if (Data::verbose)
		std::cout << "Data constructor whit id, organization called\n";
}

Data::Data(Data const &copy)
{
	*this = copy;
	if (Data::verbose)
		std::cout << "Data Copy constructor called\n";
}

Data	&Data::operator=(const Data &copy)
{
	this->_id = copy._id;
	this->_organization = copy._organization;
	std::cout << "Data assignment operator called\n";
	return (*this);
}

std::string	const	Data::getId()			const
{
	return (_id);
}

std::string	const	Data::getOrganization() const
{
	return (_organization);
}

void				Data::setId(const std::string &id)
{
	_id = id;
}

void				Data::setOrganization(const std::string &organization)
{
	_organization = organization;
}

Data	*Data::deserialization(uintptr_t raw)
{
	if (Data::verbose)
		std::cout << "Data deserialization\n";
	return (reinterpret_cast<Data*>(raw));
}

uintptr_t	Data::serialization(Data *ptr)
{
	if (Data::verbose)
		std::cout << "Data serialization\n";
	return (reinterpret_cast<uintptr_t>(ptr));
}

std::ostream	&operator<<(std::ostream &os, Data data)
{
	os << "ID: " << data.getId() << "\nOrganization: " << data.getOrganization(); 
	return (os);
}
