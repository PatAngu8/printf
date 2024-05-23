# Library name
NAME = libft.a

# Compiler and compilation options
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Sources
SRC = $(wildcard ft_*.c)
SRC_BONUS = ft_lstnew_bonus.c\
ft_lstadd_front_bonus.c\
ft_lstsize_bonus.c\
ft_lstlast_bonus.c\
ft_lstadd_back_bonus.c\
ft_lstdelone_bonus.c\
ft_lstclear_bonus.c\
ft_lstiter_bonus.c\
ft_lstmap_bonus.c\

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
