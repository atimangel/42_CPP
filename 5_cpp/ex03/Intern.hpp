/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:59:29 by snpark            #+#    #+#             */
/*   Updated: 2022/01/27 13:29:01 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"
class Intern
{
	public:
		Intern();
		~Intern();
		Intern(Intern const &copy);
		Intern	&operator=(Intern const &copy);
		Form	*makeForm(std::string form_name, std::string target);
};
#endif
