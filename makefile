CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
NAME = ft_printf.a
SRCSDIR = src
OBJSDIR = obj
SRCSFILES = ft_printf.c \
			ft_putdigit.c \
			ft_puthexnb.c \
			ft_puthexptr.c \
			ft_putstr.c \
			ft_putchar.c \
			ft_putuint.c \
			ft_strlen.c \
			ft_strdup.c \

SRCS = $(addprefix $(SRCSDIR)/, $(SRCSFILES))
OBJS = $(patsubst $(SRCSDIR)/%.c, $(OBJSDIR)/%.o, $(SRCS))
HEAD = -I inc

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(OBJS): $(SRCS)

$(OBJSDIR)/%.o: $(SRCSDIR)/%.c | obj
	$(CC) $(CFLAGS) -c $< -o $@ $(HEAD)

obj:
	@mkdir -p $(OBJSDIR)

clean:
	rm -rf $(OBJSDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re