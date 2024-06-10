CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
NAME = ft_printf.a
SRCS = 		src/ft_printf.c \
			src/ft_putdigit.c \
			src/ft_puthexnb.c \
			src/ft_puthexptr.c \
			src/ft_putstr.c \
			src/ft_putchar.c \
			src/ft_putuint.c \

OBJS = ${SRCS:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re