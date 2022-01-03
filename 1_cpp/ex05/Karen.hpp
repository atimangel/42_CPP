/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:38:39 by snpark            #+#    #+#             */
/*   Updated: 2022/01/03 17:08:30 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>

class	Karen
{
	public:
		Karen(void);
		~Karen(void);
		void						complain(std::string level);
	private:
		void						debug(void);
		void						info(void);
		void						warning(void);
		void						error(void);
		void						null(void);
		int							getLevel(std::string level);
		void						(Karen::*action[5])(void);
		const static std::string	_level[4];
};

# define KAREN_DEBUG "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
# define KAREN_INFO "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
# define KAREN_WARNING "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
# define KAREN_ERROR  "This is unacceptable, I want to speak to the manager now."
#endif
