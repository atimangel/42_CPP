/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:36:26 by snpark            #+#    #+#             */
/*   Updated: 2022/01/26 11:51:33 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <exception>
# include <iostream>
# include <ostream>

class Bureaucrat
{ 
	public:
		Bureaucrat(std::string name, int grade) throw (std::exception);
		Bureaucrat(Bureaucrat const &copy) throw (std::exception);
		~Bureaucrat();

		std::string const	&getName()	const;
		int			const	&getGrade()	const;

		void	increment() throw(std::exception);
		void	decrement() throw(std::exception);

		class GradeTooHighException :
			public std::exception
		{
			public:
				const char *what(void) const throw();
		};
		class GradeTooLowException :
			public std::exception
		{		
			public:
				const char *what(void) const throw();
		};

	private:
		Bureaucrat();
		Bureaucrat	&operator=(Bureaucrat const &copy);
		const std::string	_name; 
		int					_grade;
};

std::ostream	&operator<<(std::ostream& os, Bureaucrat unit);
#endif
