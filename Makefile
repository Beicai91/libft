CC = cc
CFLAGS = -Wextra -Werror -Wall

SRCS = ft_bzero.c\
	  ft_isalnum.c\
       ft_isalpha.c\
       ft_isascii.c\
       ft_isdigit.c\
       ft_isprint.c\
       ft_memcmp.c\
       ft_memmove.c\
       ft_memset.c\
       ft_strchr.c\
       ft_strlen.c\
       ft_strncmp.c ft_strrchr.c\
       ft_tolower.c\
       ft_toupper.c\
       ft_memcpy.c\
	  ft_strlcat.c\
	  ft_memchr.c\
	  ft_strnstr.c\
	  ft_atoi.c\
	  ft_calloc.c\
	  ft_strdup.c\
	  ft_strlcpy.c\
	  ft_substr.c\
	  ft_strjoin.c\
	  ft_strtrim.c\
	  ft_itoa.c\
	  ft_split.c\

          
BUILD = build
OBJS = $(patsubst %.c, $(BUILD)/%.o, $(SRCS))
HEAD = libft.h
NAME = libft.a

$(BUILD):
	mkdir $@

$(BUILD)/%.o: %.c | $(BUILD)
	$(CC) $(CFLAGS) -I$(HEAD) -c $< -o $@

$(NAME): $(OBJS)
	ar rc $@ $(OBJS)
	ranlib $(NAME)

all: $(NAME)
clean:
	rm -rf $(BUILD)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
