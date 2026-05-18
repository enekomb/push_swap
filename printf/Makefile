# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 11:51:39 by emunoz            #+#    #+#              #
#    Updated: 2023/10/21 11:59:21 by emunoz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

CC 			= 	gcc
CFLAGS 		= 	-Wall -Wextra -Werror
AR 			= 	ar rcs
RM 			= 	rm -f

PRINTFLIB	=	ft_printf.c 		\
				ft_set_format.c 	\
				ft_putchar.c 		\
				ft_putint.c 		\
				ft_putstr.c 		\
				ft_puthexa.c 		\

Y = "\033[33m"
R = "\033[31m"
G = "\033[32m"
B = "\033[34m"
X = "\033[0m"
UP = "\033[A"
CUT = "\033[K"

OBJS		= $(PRINTFLIB:%.c=%.o)

all:		$(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<
	@printf $(UP)$(CUT)
	@echo $(Y)Compiling [$<]...$(X)

$(NAME): $(OBJS)
	@printf $(UP)$(CUT)		
	@echo $(Y)Compiling [$(NAME)]...$(X)
	@echo $(G)Finished [$(NAME)]$(X)
	@$(AR) $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)
	@echo $(R)Removed [$(OBJS)]$(X)

fclean:		clean
	@$(RM) $(NAME)
	@echo $(R)Removed [$(NAME)]$(X)

re:			fclean all

.PHONY:		all clean fclean re