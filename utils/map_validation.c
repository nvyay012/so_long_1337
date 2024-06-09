/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarda <hbarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:41:50 by hbarda            #+#    #+#             */
/*   Updated: 2024/06/09 13:26:00 by hbarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	map_check(char *path, t_vars *data)
{
	int		fd;
	int		i;
	char	*line;

	i = 0;
	fd = open(path, O_RDONLY);
	check_fd(fd);
	line = get_next_line(fd);
	if (!line)
	{
		write(2, "Error\nmap is empty", 19);
		close(fd);
		exit(1);
	}
	while (line)
	{
		i++;
		free(line);
		line = get_next_line(fd);
	}
	data->height = i;
	close(fd);
}

void	map_width(char *path, t_vars *data)
{
	int		fd;
	char	*line;
	size_t	w;

	w = 0;
	fd = open(path, O_RDONLY);
	check_fd(fd);
	line = get_next_line(fd);
	w = ft_strlen2(line);
	while (line != NULL)
	{
		if (w != ft_strlen2(line))
		{
			write(2, "Error\nmap width is not equal", 29);
			free(line);
			close(fd);
			exit(1);
		}
		free(line);
		line = get_next_line(fd);
	}
	data->width = w;
	close(fd);
}

void	map_arr(char *path, t_vars *data)
{
	int	fd;
	int	i;

	i = 0;
	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		write(2, "Error\nmap file does not exist", 30);
		close(fd);
		exit(1);
	}
	data->map = malloc((data->height + 1) * sizeof(char *));
	if (!data->map)
		return ;
	while (i < data->height)
	{
		data->map[i] = get_next_line(fd);
		i++;
	}
	close(fd);
	map_arr2(path, data);
}

void	map_arr2(char *path, t_vars *data)
{
	int	fd;
	int	i;

	i = 0;
	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		write(2, "Error\nmap file does not exist", 30);
		close(fd);
		exit(1);
	}
	data->map2 = malloc((data->height + 1) * sizeof(char *));
	if (!data->map2)
		return ;
	while (i < data->height)
	{
		data->map2[i] = get_next_line(fd);
		i++;
	}
	close(fd);
}

void	check_map_border(t_vars *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->height)
	{
		j = 0;
		while (j < data->width)
		{
			if (data->map[0][j] != '1' || data->map[data->height - 1][j] != '1')
			{
				write(2, "Error\nmap border is not correct", 32);
				free_map(data);
				exit(1);
			}
			if (data->map[i][0] != '1' || data->map[i][data->width - 1] != '1')
			{
				write(2, "Error\nmap border is not correct", 32);
				free_map(data);
				exit(1);
			}
			j++;
		}
		i++;
	}
}
