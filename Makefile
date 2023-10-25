# MakeFile

CC = cc
CFLAGS = -Wextra -Werror -Wall
SRCS = 
BUILD = build
OBJS = $(patsubst $(%.c, $(BUILD)/%.o, $(SRCS))
HEAD = libft.h
LIBRARY = libft.a

$(BUILD):
     mkdir $(BUILD)

$(BUILD)/%.o: %.c | $(BUILD)
     $(CC) $(CFLAGS) -c $< -o $@

$(LIBRARY): $(OBJS)
     ar rc $@ $(OBJS)
     ranlib $(LIBRARY)

all: $(LIBRARY)
clean:
     rm -rf $(BUILD)
fclean: clean
     rm -f $(LIBRARY)

re: fclean all

