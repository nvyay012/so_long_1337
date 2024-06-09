#include "../includes/so_long.h"

void    free_map(t_vars *data)
{
        int     i;

        i = -1;
        while (++i < data->height)
        {
                free(data->map2[i]);
                free(data->map[i]);
        }
        free(data->map2);
        free(data->map);
}

int     close_window(t_vars *data)
{
        mlx_destroy_image(data->mlx_ptr, data->floor);
        mlx_destroy_image(data->mlx_ptr, data->wall);
        mlx_destroy_image(data->mlx_ptr, data->raven);
        mlx_destroy_image(data->mlx_ptr, data->exit);
        mlx_destroy_image(data->mlx_ptr, data->player_left);
        mlx_destroy_image(data->mlx_ptr, data->player_right);
        mlx_destroy_image(data->mlx_ptr, data->player_down);
        mlx_destroy_image(data->mlx_ptr, data->flame);
        mlx_destroy_window(data->mlx_ptr, data->mlx_window);
        mlx_destroy_display(data->mlx_ptr);
        free_map(data);
        free(data->mlx_ptr);
        exit(1);
        return (0);
}

void    check_fd(int fd)
{
        if (fd < 0)
        {
                write(1, "Error\nmap file does not exist", 30);
                exit(1);
        }
}
