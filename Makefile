# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/10 10:25:31 by hel-bouk          #+#    #+#              #
#    Updated: 2023/12/14 11:23:27 by hel-bouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME :=libft.a
CC := cc
CFLAGS := -Wall -Wextra -Werror -I.
RM := rm -f
SRC :=	ft_memset.c ft_isalpha.c ft_strjoin.c  ft_strmapi.c ft_isprint.c \
	ft_striteri.c ft_memmove.c ft_bzero.c ft_strlen.c \
	ft_memcmp.c ft_putendl_fd.c ft_itoa.c ft_memchr.c \
	ft_isascii.c ft_strdup.c ft_memcpy.c ft_putnbr_fd.c \
	ft_strlcpy.c ft_split.c ft_putchar_fd.c ft_substr.c \
	ft_strnstr.c ft_atoi.c ft_isalnum.c ft_putstr_fd.c \
	ft_calloc.c ft_isdigit.c ft_strncmp.c ft_toupper.c ft_strtrim.c \
	ft_strrchr.c ft_strlcat.c ft_tolower.c ft_strchr.c 

OBJS := $(SRC:.c=.o)

BONUS := ft_lstnew.c ft_lstdelone.c ft_lstsize.c ft_lstiter.c  ft_lstclear.c \
	 ft_lstmap.c ft_lstadd_front.c ft_lstadd_back.c ft_lstlast.c
BONUS_OBJS := $(BONUS:.c=.o)

all : $(NAME)
$(NAME) : $(OBJS)
	    @ar rcs $(NAME) $(OBJS)
%.o : %.c
	 @$(CC) $(CFLAGS) -c $< -o $@
bonus : $(BONUS_OBJS)
	    @ar rcs $(NAME) $(BONUS_OBJS)
clean :
	@$(RM) $(OBJS) $(BONUS_OBJS)
fclean : clean
	 @$(RM) $(NAME)
re : fclean all

.PHONY : all bonus clean fclean re
