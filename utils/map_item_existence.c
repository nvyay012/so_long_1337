/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_item_existence.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarda <hbarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:41:46 by hbarda            #+#    #+#             */
/*   Updated: 2024/06/09 13:25:23 by hbarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	check_exist_items(t_vars *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->height)
	{
		j = 0;
		while (j < data->width)
		{
			if (data->map[i][j] != 'P' && data->map[i][j] != 'C'
					&& data->map[i][j] != 'E' && data->map[i][j] != '1'
					&& data->map[i][j] != '0')
			{
				write(2, "Error\nerror in items", 21);
				free_map(data);
				exit(1);
			}
			j++;
		}
		i++;
	}
	store_content(data);
}

void	store_content(t_vars *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->height)
	{
		j = 0;
		while (j < data->width)
		{
			if (data->map[i][j] == 'E')
				data->exit1++;
			else if (data->map[i][j] == 'P')
				data->player++;
			else if (data->map[i][j] == 'C')
				data->collectables++;
			j++;
		}
		i++;
	}
	if_map_valid(data);
}

void	if_map_valid(t_vars *data)
{
	if (data->player != 1 || data->collectables < 1 || data->exit1 != 1)
	{
		write(2, "Error\nmap is not valid", 23);
		free_map(data);
		exit(1);
	}
}
