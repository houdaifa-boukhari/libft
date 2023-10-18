#  |  |  ___ \    \  |         |
#  |  |     ) |  |\/ |   _  |  |  /   _ 
# ___ __|  __/   |   |  (   |    <    __/ 
#    _|  _____| _|  _| \__,_| _|\_\ \___|
#                              by jcluzet
################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        := libft.a
COMPILATION        := gcc -c -Wall -Wextra -Werror 
################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS        :=      ft_memset.c \
                          ft_isalpha.c \
                          ft_strjoin.c \
                          ft_strmapi.c \
                          ft_isprint.c \
                          ft_striteri.c \
                          ft_memmove.c \
                          ft_bzero.c \
                          ft_strlen.c \
                          ft_memcmp.c \
                          ft_putendl_fd.c \
                          ft_itoa.c \
                          ft_memchr.c \
                          ft_isascii.c \
                          ft_strdup.c \
                          ft_memcpy.c \
                          ft_putnbr_fd.c \
                          ft_strlcpy.c \
                          ft_split.c \
                          ft_putchar_fd.c \
                          ft_substr.c \
                          ft_strnstr.c \
                          ft_atoi.c \
                          ft_isalnum.c \
                          ft_putstr_fd.c \
                          ft_calloc.c \
                          ft_isdigit.c \
                          ft_strncmp.c \
                          ft_toupper.c \
                          ft_strtrim.c \
                          ft_strrchr.c \
                          ft_strlcat.c \
                          ft_tolower.c \
                          ft_strchr.c \
                          
OBJS        := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(COMPILATION) $(SRCS) -I .
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
