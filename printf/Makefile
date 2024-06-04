# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paangulo <paangulo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 16:30:03 by paangulo          #+#    #+#              #
#    Updated: 2024/06/04 16:30:40 by paangulo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library name
NAME = libftprintf.a

# Compiler and compilation options
CC = clang
CFLAGS = -Wall -Werror -Wextra

# Sources
SRC = ft_printf.c
SRC_BONUS = 

# Objects generated during compilation
OBJS = $(SRC:.c=.o)
OBJS_BONUS = $(SRC_BONUS:.c=.o)

# Default rule for compiling the library
all: $(NAME)

# Rule to compile your main project and link it with libft
$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to compile each source file into an object 
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

# Rule to remove generated objects
clean:
	rm -f $(OBJS) $(OBJS_BONUS)

# Rule to remove the library
fclean: clean
	rm -f $(NAME)

# Rule to rebuild the project from scratch
re: fclean all

.PHONY: clean fclean all re bonus
