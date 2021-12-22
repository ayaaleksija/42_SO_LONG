# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agondard <agondard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/22 11:20:12 by agondard          #+#    #+#              #
#    Updated: 2021/12/22 14:02:44 by agondard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

/* ----- INFORMATIONS GENERALES ----- */
NAME = so_long
RM = rm -rf

/* ----- ELEMENTS DE COMPILATION ----- */
CC = clang
CFLAGS = -Wall -Werror -Wextra -g # -MMD
MFLAGS = -ldl -lmlx -L${MLX_DIR} -lm -lXext -lX11 -Imlx $(MLX_PATH)
IFLAGS:= -I ./includes
LFLAGS:= -L $(LIBFT_DIR) -lft

/* ---------- SOURCES ---------- */
SRCS =

OBJS = ${addprefix ${SRCS_DIR}, ${SRCS:.c=.o}}

/* ---------- INCLUSION DES DIFFERENTES BIBIOTHEQUES ---------- */

/* ----- INCLUSION MINILIBX-LINUX ----- */
MLX_DIR = ./mlx_linux/
MLX_MAKE = Makefile
MLX_PATH = ${MLX_DIR}/libmlx.a

/* ----- INCLUSION LIBFT ----- */
LIBFT_DIR = ./libft/
LIBFT_MAKE = Makefile
LIBFT_PATH = ${LIBFT_DIR}/libft.a

/* ----- INCLUSION GNL ----- */
GNL_DIR = ./get_next_line/
GNL = 	get_next_line.c \
		get_next_line_utils.c \
GNL_OBJS = ${addprefix ${GNL_DIR}, ${GNL:.c=.o}}

# /* ~~~~~~~ Colors ~~~~~~~ */
BLACK:="\033[1;30m"
RED:="\033[1;31m"
GREEN:="\033[1;32m"
PURPLE:="\033[1;35m"
CYAN:="\033[1;36m"
WHITE:="\033[1;37m"
EOC:="\033[0;0m"

all:	${NAME}

$(NAME): $(OBJS) $(GNL_OBJS)
	@make -C ${MLX_DIR}
	@cd $(LIBFT_DIR) && $(MAKE)
	@echo $(CYAN) " - Compiling $@" $(RED)
	@$(CC) $(CFLAGS) $(OBJS) $(GNL_OBJS) $(SRCS_DIR)main.c $(IFLAGS) $(LFLAGS) -o $(NAME) $(MFLAGS)
	@echo $(GREEN) "[OK COMPILED]" $(EOC)

clean:
		@echo $(PURPLE) "[🧹Cleaning...🧹]" $(EOC)
		@${RM} ${OBJS}
		@${RM} -r ${OBJ_DIR}
		@make -C ${LIBFT_DIR} -f ${LIBFT_MAKE} clean

fclean: clean
		@echo $(PURPLE) "[🧹FCleaning...🧹]" $(EOC)
		@${RM} ${OBJS} ${NAME}

re: 	fclean all

.PHONY: all clean fclean re
