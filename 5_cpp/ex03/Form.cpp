/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:17:49 by snpark            #+#    #+#             */
/*   Updated: 2022/01/27 13:37:49 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

const std::string	Form::_type[3]
	= {"presidential pardon", "robotomy request", "shrubbery creation"};

int	Form::typeToId(std::string type)
	throw (std::exception, CannotFindFileType)
{
	for (int i = 0; i < 3; ++i)
		if (type == _type[i])
			return (i);
	throw	CannotFindFileType();
}

Form::Form(std::string name, int sign_grade, int execute_grade)
	throw (std::exception, Form::GradeTooHighException, Form::GradeTooLowException) :
	_name(name),
	_sign_grade(sign_grade),
	_execute_grade(execute_grade),
	_signed(false)
{
	if (sign_grade < 1 || execute_grade < 1)
		throw GradeTooHighException();
	if (sign_grade > 150 || execute_grade > 150)
		throw GradeTooLowException();
}

Form::Form(Form const &copy)
	throw (std::exception, Form::GradeTooHighException, Form::GradeTooLowException) :
	_name(copy._name),
	_sign_grade(copy._sign_grade),
	_execute_grade(copy._execute_grade),
	_signed(copy._signed)
{
	if (_sign_grade < 1 || _execute_grade < 1)
		throw GradeTooHighException();
	if (_sign_grade > 150 || _execute_grade > 150)
		throw GradeTooLowException();
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

void		Form::executable(Bureaucrat const &executor) const
			throw (std::exception, Bureaucrat::GradeTooLowException, Form::NotSignedExcption)
{
	if (this->getSigned() == false)
		throw	NotSignedExcption();
	if (this->getExecuteGrade() < executor.getGrade())
		throw	Bureaucrat::GradeTooLowException();
}

const	char *Form::GradeTooHighException::what() const throw()
{
	return ("Form Grade is too High");
}

const	char *Form::GradeTooLowException::what() const throw()
{
	return ("Form Grade is too Low");
}

Form::FileOpenExcption::FileOpenExcption() :
	std::ios_base::failure("File open exception")
{
}

const	char *Form::NotSignedExcption::what() const throw()
{
	return ("Form is not signed");
}

const	char *Form::CannotFindFileType::what() const throw()
{
	return ("Cannot find filetype");
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
			throw (std::exception, Form::GradeTooHighException)
{
	if (assignee.getGrade() > _sign_grade)
		throw GradeTooHighException();
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
