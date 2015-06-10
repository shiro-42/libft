#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/15 11:10:12 by nbeydon           #+#    #+#              #
#    Updated: 2014/11/17 19:02:08 by nbeydon          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SOURCE =	array_strings_foreach.c \
			count_bits.c \
			end_line.c \
			foreach_char.c \
			ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isblank.c \
			ft_iscntrl.c \
			ft_isdigit.c \
			ft_isgraph.c \
			ft_islower.c \
			ft_isprint.c \
			ft_ispunct.c \
			ft_isspace.c \
			ft_isupper.c \
			ft_isxdigit.c \
			ft_itoa.c \
			ft_lstadd.c \
			ft_lstat.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstsize.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdel.c \
			ft_strdup.c \
			ft_strequ.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strndup.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_tolower.c \
			ft_toupper.c \
			iterator_next.c \
			list_circular_delete.c \
			list_circular_get_keys.c \
			list_circular_insert.c \
			list_circular_pop.c \
			list_circular_push_back.c \
			list_circular_push_front.c \
			list_circular_put.c \
			list_circular_put_reverse.c \
			list_circular_rotate_left.c \
			list_circular_rotate_right.c \
			list_circular_shift.c \
			new_int_ptr.c \
			new_list_circular.c \
			new_node.c \
			node_put.c \
			throw_error.c
CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJ = $(SOURCE:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		@echo "\033[35;1m• \033[0mCreating \033[35m$(NAME)\033[0m archive...\033[55G\c"
		@export result=`ar rcs $@ $(OBJ) 2>&1` ; \
		if [ "$$result" = "" ] ; then \
			echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m" ; \
		else \
			echo "\033[37;1m[\033[31mFAIL\033[37m]\033[0m" ; \
			echo "\n$$result" ; \
			exit 1 ; \
		fi

%.o : %.c libft.h
		@echo "\033[35;1m• \033[0mCreating \033[35m$(NAME)\033[0m object file...\033[55G\c"
		@export result=`$(CC) $(CFLAGS) -c $< -o $@ 2>&1` ; \
		if [ "$$result" = "" ] ; then \
			echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m" ; \
		else \
			echo "\033[37;1m[\033[31mFAIL\033[37m]\033[0m" ; \
			echo "\n$$result" ; \
			exit 1 ; \
		fi

clean :
		@echo "\033[35;1m• \033[0mRemoving \033[35m$(NAME)\033[0m object files...\033[55G\c"
		@rm -rf $(OBJ)
		@echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m"

fclean : clean
		@echo "\033[35;1m• \033[0mRemoving \033[35m$(NAME)\033[0m...\033[55G\c"
		@rm -rf $(NAME)
		@echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m"

mrproper: fclean

re : fclean all

.PHONY: all, clean, fclean, re
