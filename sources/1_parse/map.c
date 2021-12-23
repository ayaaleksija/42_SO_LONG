/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:28:59 by agondard          #+#    #+#             */
/*   Updated: 2021/12/23 20:15:59 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	line(char *name)
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	fd = open(name, O_RDONLY);
	if (fd < 0)
		return (FAILURE);
	else
	{
		line = get_next_line(fd);
		while (line != NULL)
			i++;
			free(line);
			line = get_next_line(fd);
		}
		close(fd);
	}
	return (i);
}
