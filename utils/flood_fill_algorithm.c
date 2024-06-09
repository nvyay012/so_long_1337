/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill_algorithm.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarda <hbarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:41:11 by hbarda            #+#    #+#             */
/*   Updated: 2024/06/09 13:25:04 by hbarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	flood_fill(t_vars *data, int i, int j)
{
	if (data->map2[i][j] != '0' && data->map2[i][j] != 'C'
			&& data->map2[i][j] != 'E' && data->map2[i][j] != 'P')
		return ;
	else if (data->map2[i][j] == 'E')
	{
		data->map2[i][j] = '+';
		return ;
	}
	data->map2[i][j] = 'X';
	flood_fill(data, i + 1, j);
	flood_fill(data, i - 1, j);
	flood_fill(data, i, j + 1);
	flood_fill(data, i, j - 1);
}

void	flood_fill_checker(t_vars *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->height)
	{
		j = 0;
		while (j < data->width)
		{
			if (data->map2[i][j] == 'E' || data->map2[i][j] == 'C')
			{
				write(2, "Error\nUnplayable MAP", 24);
				close_window(data);
				exit(1);
			}
			j++;
		}
		i++;
	}
}
