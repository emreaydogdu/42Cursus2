SRCS = $(wildcard ft_*.c)
OBJS = ${SRCS:.c=.o}
LIB  = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

%.o : %.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

all: ${LIB}

${LIB} : ${OBJS}
	ar rc ${LIB} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${LIB}

re: fclean all
