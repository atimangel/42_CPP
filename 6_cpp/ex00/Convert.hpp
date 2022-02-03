/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 09:48:25 by snpark            #+#    #+#             */
/*   Updated: 2022/01/31 16:36:30 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <exception>
# define NO_TYPE	-1
# define CHAR		0
# define INT		1
# define FLOAT		2
# define DOUBLE		3

class Convert
{
	public:
		Convert();
		~Convert();
		Convert(Convert const &copy);
		Convert	&operator=(Convert const &copy);
		Convert(char const * const source);

		bool	canConvertToChar();
		bool	canConvertToInt();
		bool	canConvertToFloat();

		void	printChar();
		void	printInt();
		void	printFloat();
		void	printDouble();
		void	printAll();


		class EmptyInput : public std::exception
		{
			const char *what() const throw ()
			{
				return ("Please enter an input to be converted to char, int, float double type");
			}
		};
		class CannotDetctType: public std::exception
		{
			const char *what() const throw()
			{
				return ("The input is not a valid char, int, float or double");
			}
		};
		static bool verbose;
	private:
		bool	getType(char const * const source);
		int		_type;
		double	_value;
};
#endif
