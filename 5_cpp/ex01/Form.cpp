/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:17:49 by snpark            #+#    #+#             */
/*   Updated: 2022/01/26 12:16:24 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int sign_grade, int execute_grade)
	throw (std::exception, Form::GradeTooHighException, Form::GradeTooLowException) :
	_name(name),
	_sign_grade(sign_grade),
	_execute_grade(execute_grade),
	_signed(false)
{
	if (sign_grade < 1 || execute_grade < 1)
		throw GradeTooLowException();
	if (sign_grade > 150 || execute_grade > 150)
		throw GradeTooHighException();
}

Form::Form(Form const &copy)
	throw (std::exception, Form::GradeTooHighException, Form::GradeTooLowException) :
	_name(copy._name),
	_sign_grade(copy._sign_grade),
	_execute_grade(copy._execute_grade),
	_signed(copy._signed)
{
	if (_sign_grade < 1 || _execute_grade < 1)
		throw GradeTooLowException();
	if (_sign_grade > 150 || _execute_grade > 150)
		throw GradeTooHighException();
}

Form::~Form() {}

std::string	Form::getName()			const
{
	return (_name);
}

int			Form::getSignGrade()	const
{
	return (_sign_grade);
}

int			Form::getExecuteGrade()	const
{
	return (_execute_grade);
}

bool		Form::getSigned()		const
{
	return (_signed);
}

const	char *Form::GradeTooHighException::what() const throw()
{
	return ("Form Grade is too High");
}

const	char *Form::GradeTooLowException::what() const throw()
{
	return ("Form Grade is too Low");
}

std::ostream	&operator<<(std::ostream &os, Form &form)
{
	os << "Form <" << form.getName() << "> \n"
		<< "	sign grade	: " << form.getSignGrade() << '\n'
		<< "	execute grade	: " << form.getExecuteGrade() << '\n'
		<< "	signed		: " << form.getSigned() << '\n';
	return (os);
}

void		Form::beSigned(Bureaucrat const &assignee)
			throw (std::exception, Form::GradeTooLowException)
{
	if (assignee.getGrade() > _sign_grade)
		throw GradeTooLowException();
	_signed = true;
}

//don't use
Form::Form() :
	_name(""),
	_sign_grade(0),
	_execute_grade(0)
{
}

Form &Form::operator=(Form const &copy)
{
	(void)copy;
	return (*this);
}
