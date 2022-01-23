CC = gcc
CFLAGS	=	-Wall -Werror -Wextra
DEPS	=	libft.h
SRCS	= 	$(wildcard *.c)
NAME	=	libft.a
RM		=	rm -rf
AR		=	ar
OBJS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): obj
	$(AR) -rcs $(NAME) $(OBJS)

obj:
	$(CC) -c $(SRCS)
