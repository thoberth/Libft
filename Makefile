# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/22 16:05:37 by thoberth          #+#    #+#              #
#    Updated: 2019/10/17 12:23:17 by thoberth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c	 ft_isascii.c      ft_lstclear.c     ft_lstnew.c       ft_memcpy.c       ft_putnbr_fd.c    ft_strjoin.c      ft_strncmp.c      ft_substr.c \
	ft_bzero.c        ft_isdigit.c      ft_lstdelone.c    ft_lstsize.c      ft_memmove.c      ft_putstr_fd.c    ft_strlcat.c      ft_strnstr.c      ft_tolower.c \
	ft_calloc.c       ft_isprint.c      ft_memccpy.c      ft_memset.c       ft_split.c        ft_strlcpy.c      ft_strrchr.c      ft_toupper.c \
	ft_isalnum.c      ft_lstadd_back.c  ft_lstlast.c      ft_memchr.c       ft_putchar_fd.c   ft_strchr.c       ft_strlen.c       ft_strrev.c \
	ft_isalpha.c      ft_lstadd_front.c      ft_memcmp.c       ft_putendl_fd.c   ft_strdup.c       ft_strmapi.c      ft_strtrim.c \

OBJS	= ${SRCS:.c=.o}

HDR		= libft.h

NAME	= libft.a

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

CC		= gcc

ARRC	= ar rcs ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HDR}

${NAME}: ${OBJS}
	${ARRC}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:		all		clean	fclean	re
