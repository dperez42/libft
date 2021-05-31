# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/15 21:47:50 by dperez-z          #+#    #+#              #
#    Updated: 2019/11/15 21:48:18 by dperez-z         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS		= 	ft_strlen.c		\
			ft_bzero.c		\
			ft_memset.c		\
			ft_memcmp.c		\
			ft_memchr.c		\
			ft_memmove.c		\
			ft_memcpy.c		\
			ft_memccpy.c		\
			ft_isalpha.c		\
			ft_isdigit.c		\
			ft_isalnum.c		\
			ft_isascii.c		\
			ft_isprint.c		\
			ft_toupper.c		\
			ft_tolower.c		\
			ft_strchr.c		\
			ft_strrchr.c		\
			ft_strncmp.c		\
			ft_atoi.c		\
			ft_calloc.c		\
			ft_strdup.c		\
			ft_strlcpy.c		\
			ft_strlcat.c		\
			ft_strnstr.c		\
			ft_substr.c		\
			ft_strjoin.c		\
			ft_strtrim.c		\
			ft_itoa.c		\
			ft_strmapi.c		\
			ft_split.c		\
			ft_putchar_fd.c		\
			ft_putstr_fd.c		\
			ft_putendl_fd.c		\
			ft_putnbr_fd.c		\
			

BONUSSRCS	=	ft_lstnew_bonus.c	\
			ft_lstadd_front_bonus.c	\
			ft_lstsize_bonus.c	\
			ft_lstlast_bonus.c	\
			ft_lstadd_back_bonus.c	\
			ft_lstiter_bonus.c	\
			ft_lstdelone_bonus.c	\
			ft_lstclear_bonus.c	\
			ft_lstmap_bonus.c	\

OBJS		= ${SRCS:.c=.o}

BONUSOBJS	= ${BONUSSRCS:.c=.o}

INCLUDES	= ./

NAME		= libft.a

RM		= rm -f

GCC		= gcc -Wall -Wextra -Werror

${NAME}:	${OBJS} libft.h
		${GCC} -I${INCLUDES} -c ${SRCS}
		ar rc ${NAME} ${OBJS}
		

all: 		${NAME}

bonus:		${BONUSOBJS} ${OBJS} libft.h
		${GCC} -I${INCLUDES} -c ${BONUSSRCS} ${SRCS}
		ar rc ${NAME} ${BONUSOBJS} ${OBJS}
				
clean:
		${RM} ${OBJS} ${BONUSOBJS}

fclean:		clean
		${RM} ${NAME}
re:		fclean all
.PHONY: 	all clean fclean re bonus

