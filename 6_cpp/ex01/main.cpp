/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:10:53 by snpark            #+#    #+#             */
/*   Updated: 2022/02/02 19:43:00 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	Data		snpark("snpark", "42seoul");
	uintptr_t	serial;
	Data		*recover;

	serial = Data::serialization(&snpark);
	std::cout << "serial: " << serial << '\n';
	std::cout << "ptr: " << &snpark << '\n'; 
	recover = Data::deserialization(serial);
	std::cout << *recover << '\n';
	std::cout << "serial: " << Data::serialization(recover) << '\n';
	std::cout << "ptr: " << recover << '\n';
}
