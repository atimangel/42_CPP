/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:10:53 by snpark            #+#    #+#             */
/*   Updated: 2022/02/04 13:07:15 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	Data		snpark("snpark", "42seoul");
	uintptr_t	serial;
	Data		*recover;

	std::cout << "original\n";
	std::cout << snpark << '\n';
	std::cout << "ptr: " << &snpark << '\n'; 
	serial = Data::serialization(&snpark);
	std::cout << "serialization\n";
	std::cout << "serial: " << serial << '\n';
	recover = Data::deserialization(serial);
	std::cout << "deserialization\n";
	std::cout << *recover << '\n';
	std::cout << "serial: " << Data::serialization(recover) << '\n';
	std::cout << "ptr: " << recover << '\n';
}
