# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 13:22:13 by ekaik-ne          #+#    #+#              #
#    Updated: 2023/12/14 13:22:15 by ekaik-ne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ReplaceStr.cpp

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
	rm -f *.replace

re: fclean all