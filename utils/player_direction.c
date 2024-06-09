/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_direction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarda <hbarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:41:59 by hbarda            #+#    #+#             */
/*   Updated: 2024/06/09 12:28:32 by hbarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	up(t_vars *data)

{
	data->map[data->player_height - 1][data->player_width] = 'P';
	data->map[data->player_height][data->player_width] = '0';
	data->left = 0;
	data->right = 0;
	data->up = 1;
	data->down = 0;
}

void	down(t_vars *data)
{
	data->map[data->player_height + 1][data->player_width] = 'P';
	data->map[data->player_height][data->player_width] = '0';
	data->left = 0;
	data->right = 0;
	data->up = 0;
	data->down = 1;
}

void	left(t_vars *data)
{
	data->map[data->player_height][data->player_width - 1] = 'P';
	data->map[data->player_height][data->player_width] = '0';
	data->left = 1;
	data->right = 0;
	data->up = 0;
	data->down = 0;
}

void	right(t_vars *data)
{
	data->map[data->player_height][data->player_width + 1] = 'P';
	data->map[data->player_height][data->player_width] = '0';
	data->left = 0;
	data->right = 1;
	data->up = 0;
	data->down = 0;
}
