/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:56:39 by snpark            #+#    #+#             */
/*   Updated: 2022/01/26 19:05:07 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	Bureaucrat::executeForm(const Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " execute " << form.getName() << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << _name << " cannot execute " << form.getName() << " because " << e.what() << '\n';
	}
}

void		Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << '\n';
	}
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat Grade too High");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat Grade too Low");
}

Bureaucrat::Bureaucrat(std::string name, int grade) throw (std::exception):
	_name(name),
	_grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) throw (std::exception):
	_name(copy._name),
	_grade(copy._grade)
{
	if (copy._grade < 1)
		throw GradeTooHighException();
	if (copy._grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

std::string	const &Bureaucrat::getName()	const
{
	return (_name);
}

int const	&Bureaucrat::getGrade()	const
{
	return (_grade);
}

void	Bureaucrat::increment() throw(std::exception)
{
	if (_grade == 1)
		throw GradeTooHighException();
	--_grade;
}

void	Bureaucrat::decrement() throw(std::exception)
{
	if (_grade == 150)
		throw GradeTooLowException();
	++_grade;
}

std::ostream	&operator<<(std::ostream& os, Bureaucrat unit)
{
	os << unit.getName() << ", bureaucrat grade "
		<< unit.getGrade();
	return (os);
}

//don't use

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	_grade = copy._grade;
	if (copy._grade < 1)
		throw GradeTooHighException();
	if (copy._grade > 150)
		throw GradeTooLowException();
	return (*this);
}

Bureaucrat::Bureaucrat() :
	_name(),
	_grade()
{
}
