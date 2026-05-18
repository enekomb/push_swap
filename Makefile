# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 17:34:26 by emunoz            #+#    #+#              #
#    Updated: 2024/02/23 09:02:20 by emunoz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  		=  push_swap

CC 	  		=  gcc
CFLAGS 		= -Wall -Wextra -Werror

CORE		= 	main.c  						\
				core/check_args.c 				\
				core/create_stack.c 			\
				core/print_stack.c  			\
				core/is_sorted.c  				\
				algorithm/sort_stack.c 		\
				algorithm/quick_sort.c 		\
				algorithm/final_sort.c 		\

ACTIONS		= 	actions/push.c					\
				actions/reverse.c 				\
				actions/rotate.c 				\
				actions/swap.c  				\
				
UTILS  		= 	utils/ft_atoi.c 				\
				utils/ft_putstr_fd.c 			\
				utils/stack_utils.c 			\
				utils/free_stack.c 				\

PRINTF 		= printf

RM			= rm -rf

Y = "\033[33m"
R = "\033[31m"
G = "\033[32m"
B = "\033[34m"
X = "\033[0m"
UP = "\033[A"
CUT = "\033[K"

OBJS	= $(CORE:.c=.o) $(ACTIONS:.c=.o) $(UTILS:.c=.o)

all:		$(NAME)

%.o: %.c
		@$(CC) $(CFLAGS) -c -o $@ $<
		@printf $(UP)$(CUT)
		@echo $(Y)Compiling [$<]...$(X)

$(NAME): $(OBJS)
				@printf $(UP)$(CUT)		
				@echo $(Y)Compiling [$(NAME)]...$(X)
				@echo $(G)Finished [$(NAME)]$(X)
				make -C $(PRINTF)
				@$(CC) $(CFLAGS) -o $@ $^ $(PRINTF)/libftprintf.a


clean:
	@make -C $(PRINTF) clean
	@$(RM) $(OBJS)
	@echo $(R)Removed [$(OBJS)]$(X)

fclean:
	@make -C $(PRINTF) fclean
	@$(RM) $(OBJS)
	@$(RM) $(NAME)
	@echo $(R)Removed [$(OBJS)]$(X)
	@echo $(R)Removed [$(NAME)]$(X)

re:			fclean all

.PHONY:		all clean fclean re