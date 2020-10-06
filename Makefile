NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HDER = libft.h
RM = rm -f
B_SRCS = $(wildcard *lst*.c)
SRCS = $(filter-out $(B_SRCS), $(wildcard *.c))
ALLSRCS = $(wildcard *.c)
ALLOBJS = $(ALLSRCS:.c=.o) 
OBJS = $(SRCS:.c=.o)
BOBJS = $(B_SRCS:.c=.o)


all : $(NAME)
$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
.c.o : $(ALLSRCS) $(HDER)
	$(CC) $(CFLAGS) -c $< -o $@
bonus : $(ALLOBJS)
	ar rc $(NAME) $(ALLOBJS)
clean :
	$(RM) $(OBJS) $(BOBJS)
fclean : clean
	$(RM) $(NAME)
re : fclean all
