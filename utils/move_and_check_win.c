/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_and_check_win.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarda <hbarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:41:56 by hbarda            #+#    #+#             */
/*   Updated: 2024/06/09 12:25:50 by hbarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	print_up(t_vars *data)
{
	char	*res;

	if (all_collected(data) && data->map[data->player_height - 1]
		[data->player_width] != '1' && data->map[data->player_height
			- 1][data->player_width] == 'E')
		you_won(data);
	else if (data->map[data->player_height - 1][data->player_width] != '1'
			&& data->map[data->player_height - 1][data->player_width] != 'E')
	{
		up(data);
		data->moves++;
		write(1, "moves: ", 8);
		res = ft_itoa(data->moves);
		ft_putstr(res);
		free(res);
		ft_putstr("\n");
	}
}

void	print_down(t_vars *data)
{
	char	*res;

	if (all_collected(data) && data->map[data->player_height + 1]
		[data->player_width] != '1' && data->map[data->player_height
			+ 1][data->player_width] == 'E')
		you_won(data);
	else if (data->map[data->player_height + 1][data->player_width] != '1'
			&& data->map[data->player_height + 1][data->player_width] != 'E')
	{
		down(data);
		data->moves++;
		res = ft_itoa(data->moves);
		write(1, "moves: ", 8);
		ft_putstr(res);
		free(res);
		ft_putstr("\n");
	}
}

void	print_left(t_vars *data)
{
	char	*res;

	if (all_collected(data) && data->map[data->player_height][data->player_width
		- 1] != '1' && data->map[data->player_height][data->player_width
			- 1] == 'E')
		you_won(data);
	else if (data->map[data->player_height][data->player_width - 1] != '1'
			&& data->map[data->player_height][data->player_width - 1] != 'E')
	{
		left(data);
		data->moves++;
		res = ft_itoa(data->moves);
		write(1, "moves: ", 8);
		ft_putstr(res);
		free(res);
		ft_putstr("\n");
	}
}

void	print_right(t_vars *data)
{
	char	*res;

	if (all_collected(data) && data->map[data->player_height][data->player_width
		+ 1] != '1' && data->map[data->player_height][data->player_width
			+ 1] == 'E')
		you_won(data);
	else if (data->map[data->player_height][data->player_width + 1] != '1'
			&& data->map[data->player_height][data->player_width + 1] != 'E')
	{
		right(data);
		data->moves++;
		res = ft_itoa(data->moves);
		write(1, "moves: ", 8);
		ft_putstr(res);
		free(res);
		ft_putstr("\n");
	}
}

void	you_won(t_vars *data)
{
	char	*res;

	data->moves++;
	write(1, "moves: ", 8);
	res = ft_itoa(data->moves);
	ft_putstr(res);
	write(1, "\nyou won", 8);
	free(res);
	close_window(data);
	exit(0);
}
