/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resource_clean_up.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarda <hbarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:42:04 by hbarda            #+#    #+#             */
/*   Updated: 2024/06/09 12:31:45 by hbarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	destroy_floor(t_vars *data)
{
	if (!data->floor)
	{
		mlx_destroy_image(data->mlx_ptr, data->wall);
		mlx_destroy_image(data->mlx_ptr, data->raven);
		mlx_destroy_image(data->mlx_ptr, data->exit);
		mlx_destroy_image(data->mlx_ptr, data->player_left);
		mlx_destroy_image(data->mlx_ptr, data->player_right);
		mlx_destroy_image(data->mlx_ptr, data->flame);
		clear(data);
	}
}

void	destroy_wall(t_vars *data)
{
	if (!data->wall)
	{
		mlx_destroy_image(data->mlx_ptr, data->floor);
		mlx_destroy_image(data->mlx_ptr, data->raven);
		mlx_destroy_image(data->mlx_ptr, data->exit);
		mlx_destroy_image(data->mlx_ptr, data->player_left);
		mlx_destroy_image(data->mlx_ptr, data->player_right);
		mlx_destroy_image(data->mlx_ptr, data->flame);
		clear(data);
	}
}

void	destroy_exit(t_vars *data)
{
	if (!data->exit)
	{
		mlx_destroy_image(data->mlx_ptr, data->floor);
		mlx_destroy_image(data->mlx_ptr, data->wall);
		mlx_destroy_image(data->mlx_ptr, data->raven);
		mlx_destroy_image(data->mlx_ptr, data->player_left);
		mlx_destroy_image(data->mlx_ptr, data->player_right);
		mlx_destroy_image(data->mlx_ptr, data->flame);
		clear(data);
	}
}

void	destroy_player_down(t_vars *data)
{
	if (!data->player_down)
	{
		mlx_destroy_image(data->mlx_ptr, data->floor);
		mlx_destroy_image(data->mlx_ptr, data->wall);
		mlx_destroy_image(data->mlx_ptr, data->raven);
		mlx_destroy_image(data->mlx_ptr, data->player_left);
		mlx_destroy_image(data->mlx_ptr, data->player_right);
		mlx_destroy_image(data->mlx_ptr, data->flame);
		mlx_destroy_image(data->mlx_ptr, data->exit);
		clear(data);
	}
}
