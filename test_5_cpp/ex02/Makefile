# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 14:27:46 by snpark            #+#    #+#              #
#    Updated: 2022/01/26 21:55:19 by snpark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src		= main.cpp\
		  Bureaucrat.cpp\
		  Form.cpp\
		  ShrubberyCreationForm.cpp\
		  RobotomyRequestForm.cpp\
		  PresidentialPardonForm.cpp

obj		= $(src:%.cpp=%.o)

flags	= -Wall -Werror -Wextra -std=c++98

NAME	= Chaos 


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
