# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbarda <hbarda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/09 11:42:13 by hbarda            #+#    #+#              #
#    Updated: 2024/06/09 11:42:13 by hbarda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = cc -Wall -Wextra -Werror

SRC = utils/utility_functions.c utils/resource_clean_up.c utils/resource_clean_up2.c utils/get_next_line.c \
	utils/get_next_line_utils.c utils/ft_strlen2.c utils/player_direction.c utils/move_and_check_win.c \
	utils/memory_cleanup.c utils/map_validation.c utils/map_item_existence.c utils/ft_strcmp.c utils/ft_strrchr.c \
	utils/map_graphics_handling.c utils/flood_fill_algorithm.c utils/ft_putstr.c utils/ft_putchar.c utils/ft_itoa.c \
	utils/ft_memset.c so_long.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC)  -I/usr/include -Imlx_linux -O3 -c $< -o $@

$(NAME): $(OBJ)
	$(CC)  $(OBJ) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.SECONDARY : $(OBJ)