/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 06:56:41 by snpark            #+#    #+#             */
/*   Updated: 2022/01/03 11:13:42 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void	handle_error(std::string message)
{
	std::cout << message << std::endl;
	exit(1);
}

void	replace(std::string filename, std::string str1, std::string str2)
{
	std::ifstream	original(filename, std::ifstream::in);
	std::ofstream	copy(filename + ".replace", std::ifstream::out);
	std::string		dest;

	if (str1.empty() || str2.empty())
		handle_error("string is empty");
	if (original.fail() || copy.fail())
		handle_error("file open error");
	while (!original.eof())
	{
		std::getline(original, dest);
		if (!original.eof())
			dest += '\n';
		int	position = 0;
		while (dest.find(str1, position) != std::string::npos)
		{
			position = dest.find(str1, position);
			dest.erase(position, str1.size());
			dest.insert(position, str2);
			position += str2.size();
		}
		copy.write(dest.c_str(), dest.length());
	}
}

int	main(int argc, char **argv)
{
	int const required_argc = 4;

	if (argc != required_argc)
		handle_error("required argument: filename string1 string2"); 
	else
		replace(argv[1], argv[2], argv[3]);
}
