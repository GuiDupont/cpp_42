# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/07 11:26:53 by gdupont           #+#    #+#              #
#    Updated: 2021/07/01 17:01:39 by gdupont          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialization

CXX = clang++

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp A.cpp B.cpp C.cpp Base.cpp

VERSION = --std=c++98

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