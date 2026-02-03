# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 11:00:37 by mvelasqu          #+#    #+#              #
#    Updated: 2026/02/03 12:06:50 by mvelasqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Defining Variables

NAME = test
MAIN = main.c
#L_ALL = all.a
#L_LIB = libft.a
#L_PS = libpush_swap.a
CC = gcc
IDIR = includes
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
PRINTF_DIR = ft_printf
#GNL_DIR = get_next_line
PS_DIR = push_swap
INC = -I $(IDIR)

#FILES
SRCS_LIB = libft_src/ft_atoi.c \
		libft_src/ft_bzero.c \
		libft_src/ft_calloc.c \
		libft_src/ft_isalnum.c \
		libft_src/ft_isalpha.c \
		libft_src/ft_isascii.c \
		libft_src/ft_isdigit.c \
		libft_src/ft_isprint.c \
		libft_src/ft_itoa.c \
		libft_src/ft_memchr.c \
		libft_src/ft_memcmp.c \
		libft_src/ft_memcpy.c \
		libft_src/ft_memmove.c \
		libft_src/ft_memset.c \
		libft_src/ft_putchar_fd.c \
		libft_src/ft_putendl_fd.c \
		libft_src/ft_putnbr_fd.c \
		libft_src/ft_putstr_fd.c \
		libft_src/ft_split.c \
		libft_src/ft_strchr.c \
		libft_src/ft_strdup.c \
		libft_src/ft_striteri.c \
		libft_src/ft_strjoin.c \
		libft_src/ft_strjoin_delimeter.c \
		libft_src/ft_strlcat.c \
		libft_src/ft_strlcpy.c \
		libft_src/ft_strlen.c \
		libft_src/ft_strmapi.c \
		libft_src/ft_strncmp.c \
		libft_src/ft_strnstr.c \
		libft_src/ft_strrchr.c \
		libft_src/ft_strtrim.c \
		libft_src/ft_substr.c \
		libft_src/ft_tolower.c \
		libft_src/ft_toupper.c \
		libft_src/ft_lstnew_bonus.c \
		libft_src/ft_lstadd_front_bonus.c \
		libft_src/ft_lstsize_bonus.c \
		libft_src/ft_lstlast_bonus.c \
		libft_src/ft_lstadd_back_bonus.c \
		libft_src/ft_lstdelone_bonus.c \
		libft_src/ft_lstclear_bonus.c \
		libft_src/ft_lstiter_bonus.c \
		libft_src/ft_lstmap_bonus.c \
		libft_src/ft_str_to_lst.c \
		libft_src/ft_free_split.c \
		ft_printf/ft_printf.c \
		ft_printf/ft_printf_utils1.c \
		ft_printf/ft_printf_utils2.c
SRCS_PS = push_swap/ps_check_ascending.c \
		push_swap/ps_check_integer.c \
		push_swap/ps_check_min.c \
		push_swap/ps_check_repeat.c \
		push_swap/ps_doubelst_add_back.c \
		push_swap/ps_doubelst_new.c \
		push_swap/ps_doublelst_add_front.c \
		push_swap/ps_free_lst.c \
		push_swap/ps_index_of_min_reverse.c \
		push_swap/ps_index_of_min_rotate.c \
		push_swap/ps_indext_of_min.c \
		push_swap/ps_print_list.c \
		push_swap/ps_input_to_str.c
OBJS_LIB = $(SRCS_LIB:.c=.o)
OBJS_PS = $(SRCS_PS:.c=.o)
OBJS_MAIN = $(MAIN:.c=.o)

#Builds the library
all: $(NAME)

$(NAME): $(OBJS_LIB) $(OBJS_PS) $(OBJS_MAIN)
	$(CC) $(MAIN) $(OBJS_LIB) $(OBJS_PS) -o $(NAME)

#$(NAME): $(L_ALL)
#	$(CC) $(MAIN) $(L_ALL) -o $(NAME)

#$(L_ALL): $(L_LIB) $(L_PS)
#	$(AR) $(L_ALL) $(L_LIB) $(LIB_PS)

#$(L_LIB): $(OBJS_LIB)
#	 $(AR) $(L_LIB) $(OBJS_LIB)

#$(L_PS): $(OBJS_PS)
#	 $(AR) $(L_PS) $(OBJS_LIB)

#RULES

%.o: %.c 
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean: 
	$(RM) $(OBJS_PS) $(OBJS_LIB) $(OBJS_MAIN)

fclean: clean
	$(RM) $(NAME) $(L_LIB) $(L_PS)

re: fclean all 

.PHONY: all clean fclean re bonus
