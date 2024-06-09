#include "../includes/so_long.h"

void    destroy_floor(t_vars *data)
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

void    destroy_wall(t_vars *data)
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

void    destroy_exit(t_vars *data)
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

void    destroy_player_down(t_vars *data)
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
