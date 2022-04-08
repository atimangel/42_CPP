/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:18:00 by snpark            #+#    #+#             */
/*   Updated: 2022/01/26 14:23:05 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <exception>
# include <ostream>

class	Bureaucrat;

class Form
{
	public:
		Form(std::string name, int sign_grade, int execute_grade)
			throw (std::exception, Form::GradeTooHighException, Form::GradeTooLowException);
		Form(Form const &copy)
			throw (std::exception, Form::GradeTooHighException, Form::GradeTooLowException);
		~Form();

		std::string	getName()			const;
		int			getSignGrade()		const;
		int			getExecuteGrade()	const;
		bool		getSigned()			const;
		void		beSigned(Bureaucrat const &assignee)
			throw (std::exception, Form::GradeTooLowException);

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

	private:
		const std::string	_name;
		const int			_sign_grade;
		const int			_execute_grade;
		bool				_signed;
		/*Don't use this*/
		Form();
		Form &operator=(Form const &copy);
};

std::ostream	&operator<<(std::ostream &os, Form &form);

#endif
