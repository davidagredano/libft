SRCS	= ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c

OBJS	= $(SRCS:.c=.o)

NAME	= libft.a

CC	= cc

CFLAGS	= -Wall -Werror -Wextra

LIBC	= ar rcs

RM	= rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $@ $^

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $< 

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
