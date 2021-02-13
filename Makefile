NAME = libasm

NAME_LIB = libasm.a

SRCS = 	ft_write.s ft_read.s ft_strlen.s ft_strcpy.s ft_strcmp.s ft_strdup.s

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NASM = nasm

NASMFLAGS = -f elf64

OBJ = $(SRCS:.s=.o)

%.o : %.s
	$(NASM) $(NASMFLAGS) $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME_LIB) $(OBJ)

ccproject :
	$(CC) $(CFLAGS) main.c -no-pie $(NAME_LIB)
	
clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME_LIB)
	rm -f ./a.out

re : fclean all