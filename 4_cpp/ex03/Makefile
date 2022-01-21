# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 14:27:46 by snpark            #+#    #+#              #
#    Updated: 2022/01/20 17:39:32 by snpark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src		= main.cpp\
		  AMateria.cpp\
		  Cure.cpp\
		  Ice.cpp\
		  Character.cpp\
		  MateriaSource.cpp

obj		= $(src:%.cpp=%.o)

flags	= -Wall -Werror -Wextra -std=c++98

NAME	= game

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
