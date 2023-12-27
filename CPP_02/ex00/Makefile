# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 17:53:47 by ekaik-ne          #+#    #+#              #
#    Updated: 2023/12/27 17:53:59 by ekaik-ne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 

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