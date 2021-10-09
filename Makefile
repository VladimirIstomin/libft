SRCS_STD	= ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strnstr.c\
			ft_atoi.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c

SRCS_BONUS	= ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c

OBJS_STD	= ${SRCS_STD:.c=.o}

OBJS_BONUS	= ${SRCS_BONUS:.c=.o}

NAME		= libft.a

HEADER		= libft.h

BONUS		= bonus

LIBC		= ar rc

CC			= gcc

FLAGS		= -Wall -Werror -Wextra

RM			= rm -f

.c.o:		
			${CC} ${FLAGS} -c $< -o $@ -I ./

${NAME}:	${OBJS_STD} ${HEADER}
			${LIBC} ${NAME} ${OBJS_STD}
			ranlib ${NAME}

${BONUS}:	${OBJS_STD} ${OBJS_BONUS} ${HEADER}
			${LIBC} ${NAME} ${OBJS_STD} ${OBJS_BONUS}
			ranlib ${NAME}

all:		${NAME}

norme:
			norminette -R CheckForbiddenSourceHeader *.c
			norminette -R CheckDefine *.h

clean:
			${RM} ${OBJS_STD} ${OBJS_BONUS}

fclean:		clean
			${RM} ${LIBNAME}

re:			fclean all

.PHONY:		all norme clean fclean re
