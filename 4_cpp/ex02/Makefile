# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 14:27:46 by snpark            #+#    #+#              #
#    Updated: 2022/01/19 21:11:50 by snpark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src		= main.cpp\
		  AAnimal.cpp\
		  Cat.cpp\
		  Dog.cpp\

obj		= $(src:%.cpp=%.o)

flags	= -Wall -Werror -Wextra -std=c++98

NAME	= Animal 


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
