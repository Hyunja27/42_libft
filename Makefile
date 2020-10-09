NAME = libft.a
형래 = gcc -Wall
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HDER = libft.h
RM = rm -f
B_SRCS = $(wildcard *lst*.c)
SRCS = $(filter-out $(B_SRCS), $(wildcard *.c))
ALLSRCS = $(wildcard *.c)
ALLOBJS = $(ALLSRCS:.c=.o) 
OBJS = $(SRCS:.c=.o)
B_OBJS = $(B_SRCS:.c=.o)
AR = ar rc

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)
.c.o : $(SRCS) $(HDER)
	$(CC) $(CFLAGS) -c $< -o $@
bonus : $(ALLOBJS)
	$(AR) $(NAME) $(ALLOBJS)
clean :
	$(RM) $(OBJS) $(B_OBJS)
fclean : clean
	$(RM) $(NAME)
re : fclean all
