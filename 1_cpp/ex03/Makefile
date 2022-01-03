# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 14:27:46 by snpark            #+#    #+#              #
#    Updated: 2022/01/02 15:49:49 by snpark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src		= main.cpp\
		  Weapon.cpp\
		  HumanA.cpp\
		  HumanB.cpp

obj		= $(src:%.cpp=%.o)

flags	= -Wall -Werror -Wextra -std=c++98

NAME	= unnecessary_violence 

%.o			: %.cpp
	c++	$(flags) -c $< -o $@

all			: $(NAME)

$(NAME)		: $(obj)
	c++	$(flags) $(obj) -o $(NAME)
	
clean		:
	rm $(obj)

fclean		: clean
	rm $(NAME)

re			: fclean all
