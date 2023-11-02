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
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \

BONUS = ft_lstnew.c \
	   ft_lstadd_front.c \
	   ft_lstsize.c \
	   ft_lstlast.c \
	   ft_lstadd_back.c \
	   ft_lstdelone.c \
	   ft_lstclear.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
          
OBJS = $(patsubst %.c, %.o, $(SRCS))
OBJS_B = $(patsubst %.c, %.o, $(BONUS))
HEAD = libft.h
NAME = libft.a

%.o: %.c 
	$(CC) $(CFLAGS) -I$(HEAD) -c $< -o $@

$(NAME): $(OBJS)
	ar rc $@ $(OBJS)
	ranlib $(NAME)

bonus: $(OBJS_B)
	ar rc $(NAME) $(OBJS_B)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS) $(OBJS_B)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
