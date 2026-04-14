# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: axgimene <axgimene@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/14 15:52:46 by axgimene          #+#    #+#              #
#    Updated: 2026/04/14 15:57:46 by axgimene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = Abstract
CC          = c++
FLAGS       = -Wall -Wextra -Werror -std=c++98
SRCS        = main.cpp Dog.cpp Cat.cpp Brain.cpp AAnimal.cpp
OBJS        = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re