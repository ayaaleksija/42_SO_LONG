/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:02:43 by agondard          #+#    #+#             */
/*   Updated: 2021/12/23 17:43:09 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

# define SUCCESS 1
# define FAILURE 0
# define ERROR -1

# define WINDOW_WIDTH 1024
# define WINDOW_HEIGHT 600

#define RED_PIXEL 0xFF0000

// ajout des bibliotheques
#include <stdlib.h>
#include <unistd.h>
#include "../library/libft/libft.h"
#include "../library/get_next_line/get_next_line.h"
#include "../library/mlx_linux/mlx.h"
#include <X11/X.h>
#include <X11/keysym.h>
#include <fcntl.h>

typedef struct s_data
{
	void	*mlx_ptr;
	void	*window;
}	t_data;


typedef struct s_rect
{
	int	x;
	int	y;
	int width;
	int height;
	int color;
}	t_rect;

// DESIGN
int	render(t_data *data);
int render_rect(t_data *data, t_rect rect);


// ACTIONS
int	press_escape(int keysym, t_data *data);


#endif
