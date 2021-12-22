/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:02:43 by agondard          #+#    #+#             */
/*   Updated: 2021/12/22 18:58:29 by agondard         ###   ########.fr       */
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
#include "../library/mlx_linux/mlx.h"
#include <X11/X.h>
#include <X11/keysym.h>

typedef struct s_data
{
	void	*mlx_ptr;
	void	*window;
}	t_data;


// DESIGN
int	render(t_data *data);

// ACTIONS
int	press_escape(int keysym, t_data *data);


#endif
