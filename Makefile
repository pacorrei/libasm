NAME = libasm.a

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
	ar rcs $(NAME) $(OBJ)
	$(CC) $(CFLAGS) main.c $(NAME)
	
clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)
	rm -f ./a.out

re : fclean all

.PHONY: re clean fclean all