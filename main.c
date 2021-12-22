/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:42:33 by agondard          #+#    #+#             */
/*   Updated: 2021/12/22 17:49:57 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(void)
{
	t_data	data;

	data.mlx_ptr = mlx_init();
	if (data.mlx_ptr == NULL)
		return (ERROR);
	data.window = mlx_new_window(data.mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT, "Alexia");
	if (data.window == NULL)
	{
		free(data.window);
		return (ERROR);
	}

	mlx_loop_hook(data.mlx_ptr, &render, &data);
	mlx_hook(data.window, KeyPress, KeyPressMask, &press_escape, &data);
	mlx_loop(data.mlx_ptr);

	mlx_destroy_display(data.mlx_ptr);
	free(data.mlx_ptr);
}
