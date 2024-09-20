NAME=libft.a
CC=gcc
FLAGS= -Wall -Wextra -Werror
SOURCE=ft_atoi.c ft_isalnum.c  ft_isascii.c  ft_isprint.c ft_strrchr.c  ft_toupper.c strlcpy.c
OBJECT=$(SOURCE:.c=.o)
AR= ar rcs 

all: $(NAME)

$(NAME):$(OBJECT)
	$(AR) $(NAME) $(OBJECT)
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJECT)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all fclean clean re

#$< -o $@ compile kola wahed bohdo 