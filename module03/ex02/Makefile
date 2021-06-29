# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/12 17:07:14 by gdupont           #+#    #+#              #
#    Updated: 2021/06/28 10:18:30 by gdupont          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

CXX = clang++

FLAGS = -Wall -Wextra -Werror

VERSION = --std=c++98

SRCS = ScavTrap.cpp ClapTrap.cpp FragTrap.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}

all: ${NAME}

$(NAME): ${OBJS}
	${CXX} ${FLAGS} ${VERSION} -o ${NAME} ${OBJS}

%.o: %.cpp
	${CXX} ${FLAGS} ${VERSION} -c $< -o $@

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean
