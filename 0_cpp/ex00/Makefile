# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 14:27:46 by snpark            #+#    #+#              #
#    Updated: 2022/01/01 12:04:09 by snpark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src		= megaphone.cpp

flags	= -Wall -Werror -Wextra -std=c++98

NAME	= megaphone

obj		= $(src:%.cpp=%.o)

%.o		: %.cpp
	c++	$(flags) -c $< -o $@

all		: $(NAME)

$(NAME)	: $(obj)
	c++	$(flags) $(obj) -o $(NAME)
	
clean	:
	rm $(obj)

fclean	: clean
	rm $(NAME)

re		: fclean all

test	: $(NAME)
	./megaphone
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone hello world
	./megaphone {a..z}
	./megaphone {A..Z}
		
