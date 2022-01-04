/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:14:49 by snpark            #+#    #+#             */
/*   Updated: 2022/01/04 14:31:12 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	karen;

	std::cout << "DEBUG\n";
	karen.complain("DEBUG");
	std::cout << "INFO\n";
	karen.complain("INFO");
	std::cout << "WARNING\n";
	karen.complain("WARNING");
	std::cout << "ERROR\n";
	karen.complain("ERROR");
}
