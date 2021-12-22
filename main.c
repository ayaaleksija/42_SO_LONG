/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:42:33 by agondard          #+#    #+#             */
/*   Updated: 2021/12/22 13:36:21 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(void)
{
	void	*mlx_ptr;
	void	*window;

	mlx_ptr = mlx_init();
	window = mlx_new_window(mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT, "Alexia");
	mlx_destroy_window(mlx_ptr, window);
	mlx_destroy_display(mlx_ptr);
	free(mlx_ptr);
}
