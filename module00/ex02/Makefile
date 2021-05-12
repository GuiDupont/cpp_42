# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/07 11:26:53 by gdupont           #+#    #+#              #
#    Updated: 2021/05/10 12:15:01 by gdupont          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = banking

CXX = clang++
FLAGS = -Wall -Wextra -Werror

SRCS_FILES = tests.cpp Account.class.cpp


OBJS = ${SRCS_FILES:.cpp=.o}

all: ${NAME}

$(NAME): ${OBJS}
	${CXX} ${FLAGS} -o ${NAME} ${OBJS}

%.o: %.cpp
	${CXX} ${FLAGS} -c $< -o $@

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re