#include "../includes/so_long.h"

void    destroy_player_left(t_vars *data)
{
        if (!data->player_left)
        {
                mlx_destroy_image(data->mlx_ptr, data->floor);
                mlx_destroy_image(data->mlx_ptr, data->wall);
                mlx_destroy_image(data->mlx_ptr, data->raven);
                mlx_destroy_image(data->mlx_ptr, data->exit);
                mlx_destroy_image(data->mlx_ptr, data->player_right);
                mlx_destroy_image(data->mlx_ptr, data->exit_win);
                mlx_destroy_image(data->mlx_ptr, data->flame);
                clear(data);
        }
}

void    destroy_player_right(t_vars *data)
{
        if (!data->player_right)
        {
                mlx_destroy_image(data->mlx_ptr, data->floor);
                mlx_destroy_image(data->mlx_ptr, data->wall);
                mlx_destroy_image(data->mlx_ptr, data->raven);
                mlx_destroy_image(data->mlx_ptr, data->exit);
                mlx_destroy_image(data->mlx_ptr, data->player_left);
                mlx_destroy_image(data->mlx_ptr, data->flame);
                clear(data);
        }
}

void    destroy_flame(t_vars *data)
{
        if (!data->flame)
        {
                mlx_destroy_image(data->mlx_ptr, data->floor);
                mlx_destroy_image(data->mlx_ptr, data->wall);
                mlx_destroy_image(data->mlx_ptr, data->raven);
                mlx_destroy_image(data->mlx_ptr, data->exit);
                mlx_destroy_image(data->mlx_ptr, data->player_left);
                mlx_destroy_image(data->mlx_ptr, data->player_right);
                clear(data);
        }
}

void    destroy_raven(t_vars *data)
{
        if (!data->raven)
        {
                mlx_destroy_image(data->mlx_ptr, data->floor);
                mlx_destroy_image(data->mlx_ptr, data->wall);
                mlx_destroy_image(data->mlx_ptr, data->exit);
                mlx_destroy_image(data->mlx_ptr, data->player_left);
                mlx_destroy_image(data->mlx_ptr, data->player_right);
                mlx_destroy_image(data->mlx_ptr, data->flame);
                clear(data);
        }
}
