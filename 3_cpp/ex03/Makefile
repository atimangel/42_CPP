# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 14:27:46 by snpark            #+#    #+#              #
#    Updated: 2022/01/16 10:28:48 by snpark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src		= main.cpp\
		  ClapTrap.cpp\
		  ScavTrap.cpp\
		  FragTrap.cpp\
		  DiamondTrap.cpp

obj		= $(src:%.cpp=%.o)

flags	= -Wall -Werror -Wextra -std=c++98
#flags	= -Wall -Werror -Wextra -std=c++98 -Wshadow
#flags	= -Wall -Werror -Wextra -std=c++98 -Wno-shadow

NAME	= DiamondTrap

%.o			: %.cpp
	c++	$(flags) -c $< -o $@

all			: $(NAME)

$(NAME)		: $(obj)
	c++	$(flags) $(obj) -o $(NAME)
	
clean		:
	rm -rf $(obj)

fclean		: clean
	rm -rf $(NAME)

re			: fclean all
