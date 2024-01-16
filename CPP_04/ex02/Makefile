NAME = animalAbstract

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

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