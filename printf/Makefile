# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paangulo <paangulo@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 16:30:03 by paangulo          #+#    #+#              #
#    Updated: 2024/06/13 12:13:54 by paangulo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library name
NAME = libftprintf.a

# Compiler and compilation options
CC = clang
CFLAGS = -Wall -Werror -Wextra

# Sources
SRC = ft_printf.c\
ft_putchar.c\
ft_putstr.c\
ft_putnbr.c\
ft_putnbr_unsigned.c\
ft_puthex.c\

# Objects generated during compilation
OBJS = $(SRC:.c=.o)

# Default rule for compiling the library
all: $(NAME)

# Rule to compile your main project and link it with libft
$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to compile each source file into an object 
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to remove generated objects
clean:
	rm -f $(OBJS)

# Rule to remove the library
fclean: clean
	rm -f $(NAME)

# Rule to rebuild the project from scratch
re: fclean all

.PHONY: clean fclean all re
