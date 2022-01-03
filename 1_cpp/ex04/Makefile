# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 14:27:46 by snpark            #+#    #+#              #
#    Updated: 2022/01/03 07:00:09 by snpark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src		= main.cpp\

obj		= $(src:%.cpp=%.o)

flags	= -Wall -Werror -Wextra -std=c++98

NAME	= replace 

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
