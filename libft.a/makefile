NAME=libft.a
CC=gcc
FLAGS= -Wall -Wextra -Werror
SOURCE=ft_atoi.c ft_isalnum.c  ft_isascii.c  ft_isprint.c  ft_memchr.c  ft_memcpy.c   ft_memset.c  ft_strlcat.c  ft_strlen.c   ft_strnstr.c  ft_tolower.cft_bzero.c  ft_isalpha.c  ft_isdigit.c  ft_memccpy.c  ft_memcmp.c  ft_memmove.c  ft_strchr.c  ft_strlcpy.c  ft_strncmp.c  ft_strrchr.c  ft_toupper.c
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