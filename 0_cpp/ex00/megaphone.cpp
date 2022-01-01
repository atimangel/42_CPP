/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 09:08:55 by snpark            #+#    #+#             */
/*   Updated: 2021/12/30 09:15:23 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

namespace	my
{
	char *toupper(char * const str);
}

char *my::toupper(char * const str)
{
	for (int i = 0; str[i]; ++i)
		if ((unsigned)str[i] - 97 < 26)
			str[i] -= 32;
	return (str);
}

int	main(int argc, char **argv)
{
	int		i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 0;
		while (++i < argc - 1)
			std::cout << my::toupper(argv[i]) << ' ';
		std::cout << my::toupper(argv[i]) << std::endl;
	}
	return (0);
}
