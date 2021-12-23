/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ber.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 15:30:22 by agondard          #+#    #+#             */
/*   Updated: 2021/12/23 17:24:04 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	check_ber(char *name)
{
	int	len;
	int	fd;

	len = ft_strlen(name) -4;
	fd = open(name, O_RDONLY);
	if (ft_strncmp(name[len], ".ber", 4) != 0 || fd < 0)
		return (FAILURE);
	else
		return (SUCCESS);
}
