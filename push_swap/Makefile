# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/06 20:46:25 by mamann-l          #+#    #+#              #
#    Updated: 2024/04/30 20:34:17 by mamann-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FILES = ft_calloc.c\
ft_split.c\
ft_strlen.c\
ft_strncmp.c\
ft_substr.c\
push_swap.c\
actions.c\
add_index.c\
chek_argv.c\
cost.c\
fill_content.c\
ft_atoi.c\
ft_lstadd_back_push_swap.c\
ft_lstnew_push_swap.c\
ft_lstsize_bonus.c\
ft_lstlast_bonus.c\
send_stack_a_to_b.c\
str_cmp.c\
push.c\
reverse_rotate.c\
rotate.c\
swap.c\
putstr.c\

OBJECTS = $(FILES:.c=.o)

FLAGS = -Wall -Wextra -Werror -g
CC = GCC

all:$(NAME)

$(NAME):$(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

%.o:%.c
	@CC $(FLAGS) -c $(FILES)

clean:
	@rm -f $(OBJECTS)

fclean:
	@rm -f $(NAME) $(OBJECTS)

re: fclean all

test2:				$(NAME)	
					$(eval ARG = $(shell shuf -i 0-100 -n 2))
					./push_swap $(ARG) | ./checker_linux $(ARG)
					@echo -n "Instructions: "
					@./push_swap $(ARG) | wc -l

test3:				$(NAME)	
					$(eval ARG = $(shell shuf -i 0-100 -n 3))
					./push_swap $(ARG) | ./checker_linux $(ARG)
					@echo -n "Instructions: "
					@./push_swap $(ARG) | wc -l

test5:				$(NAME)	
					$(eval ARG = $(shell shuf -i 0-5000 -n 5))
					./push_swap $(ARG) | ./checker_linux $(ARG)
					@echo -n "Instructions: "
					@./push_swap $(ARG) | wc -l

test100:			$(NAME)	
					$(eval ARG = $(shell shuf -i 0-5000 -n 100))
					./push_swap $(ARG) | ./checker_linux $(ARG)
					@echo -n "Instructions: "
					@./push_swap $(ARG) | wc -l

test500:			$(NAME)	
					$(eval ARG = $(shell shuf -i 0-5000 -n 500))
					./push_swap $(ARG) | ./checker_linux $(ARG)
					@echo -n "Instructions: "
					@./push_swap $(ARG) | wc -l

test1000:			$(NAME)	
					$(eval ARG = $(shell shuf -i 0-5000 -n 1000))
					./push_swap $(ARG) | ./checker_linux $(ARG)
					@echo -n "Instructions: "
					@./push_swap $(ARG) | wc -l


.PHONY: all clean fclean re test2 test3 test5 test100 test500 test1000
