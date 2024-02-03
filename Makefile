# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = ft_printf.c ft_character.c ft_number.c ft_isstrg.c ft_ishex.c ft_unsigned.c ft_isptr.c



# Object files
OBJS = $(SRCS:.c=.o)

# Library name
NAME = libftprintf.a

# Build rule
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Object file rule
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS)

# Clean and recompile rule
fclean: clean
	rm -f $(NAME)

# Rebuild rule
re: fclean all

.PHONY: all clean fclean re