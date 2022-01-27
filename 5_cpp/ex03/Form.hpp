/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:18:00 by snpark            #+#    #+#             */
/*   Updated: 2022/01/27 13:39:49 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <exception>
# include <ostream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class Form
{
	public:
		Form(std::string name, int sign_grade, int execute_grade)
			throw (std::exception, Form::GradeTooHighException, Form::GradeTooLowException);
		Form(Form const &copy)
			throw (std::exception, Form::GradeTooHighException, Form::GradeTooLowException);
		virtual ~Form();

		std::string	getName()			const;
		int			getSignGrade()		const;
		int			getExecuteGrade()	const;
		bool		getSigned()			const;
		void		beSigned(Bureaucrat const &assignee)
			throw (std::exception, Form::GradeTooHighException);
		void		executable(Bureaucrat const &executor) const
			throw (std::exception, Bureaucrat::GradeTooLowException, Form::NotSignedExcption);

		virtual void	execute(Bureaucrat const & executor) const
			throw (std::exception) = 0;
		static int			typeToId(std::string type)
			throw (std::exception, CannotFindFileType);

		class GradeTooHighException : public std::exception
		{
			public :
				const char * what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char * what() const throw();
		};
		class FileOpenExcption : public std::ios_base::failure
		{
			public :
				FileOpenExcption();
		};
		class NotSignedExcption : public std::exception
		{
			public :
				const char * what() const throw();
		};
		class CannotFindFileType : public std::exception
		{
			public :
				const char * what() const throw();
		};

	private:
		const std::string	_name;
		const int			_sign_grade;
		const int			_execute_grade;
		bool				_signed;
		const static std::string	_type[3];
		/*Don't use this*/
		Form &operator=(Form const &copy);
	protected:
		Form();
};

std::ostream	&operator<<(std::ostream &os, Form &form);

#endif
