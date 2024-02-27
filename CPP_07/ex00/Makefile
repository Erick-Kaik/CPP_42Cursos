# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 16:51:47 by ekaik-ne          #+#    #+#              #
#    Updated: 2024/02/22 16:52:06 by ekaik-ne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJDIR = obj
OBJS = $(addprefix $(OBJDIR)/, $(SRC:%.cpp=%.o))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJDIR):
	mkdir -p $@

$(OBJDIR)/%.o: src/%.cpp 
	$(CC) $(CFLAGS) -I/usr/include -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all