# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ispalma- <ispalma-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 19:31:11 by ispalma-          #+#    #+#              #
#    Updated: 2024/02/20 11:47:46 by ispalma-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = \
	ft_atoi.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_itoa.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_strmapi.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_strtrim.c\
	ft_substr.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_putchar_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_putstr_fd.c\
	ft_split.c\
	ft_strchr.c\
	ft_striteri.c\
	ft_strjoin.c\
	
BONUS_FILES = \
	ft_lstnew.c\
	ft_lstmap.c\
	ft_lstlast.c\
	ft_lstsize.c\
	ft_lstadd_back.c\
	ft_lstadd_front.c\
	ft_lstclear.c\
	ft_lstiter.c\
	ft_lstdelone.c\

OBJ = $(FILES:.c=.o)

BONUS_OBJ = $(BONUS_FILES:.c=.o)

FLAGS = -Wall -Werror -Wextra 

$(NAME): $(FILES) $(OBJ)
	@gcc -c $(FLAGS) $(FILES)
	@ar rcs $(NAME) $(OBJ)

all: $(NAME)

bonus: $(NAME) $(BONUS_FILES) $(BONUS_OBJ)
	gcc -c $(FLAGS) $(BONUS_FILES)
	ar rcs $(NAME) $(BONUS_OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME) $(BONUS_OBJ)

re:	fclean all

.PHONY: all clean fclean re bonus