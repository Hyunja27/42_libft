NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HDER = libft.h
RM = rm -f
B_SRCS = $(wildcard *lst*.c)
SRCS = $(filter-out $(B_SRCS), $(wildcard *.c))
OBJS = $(SRCS:.c=.o)
BOBJS = $(B_SRCS:.c=.o)


all : $(NAME)
$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
.c.o : $(SRCS) $(HDER)
	$(CC) $(CFLAGS) -c $< -o $@
clean :
	$(RM) $(OBJS) $(BOBJS)
fclean : clean
	$(RM) $(NAME)
re : fclean all
