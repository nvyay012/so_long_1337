#include "../includes/so_long.h"

void    fill_items(t_vars *data)
{
        data->mlx_ptr = mlx_init();
        data->mlx_window = mlx_new_window(data->mlx_ptr, data->width * 30,
                        data->height * 30, "So_long");
        data->raven = mlx_xpm_file_to_image(data->mlx_ptr, "./textures/raven.xpm",
                        &data->image_width, &data->image_height);
        data->exit = mlx_xpm_file_to_image(data->mlx_ptr, "./textures/portal.xpm",
                        &data->image_width, &data->image_height);
        data->wall = mlx_xpm_file_to_image(data->mlx_ptr, "./textures/tree.xpm",
                        &data->image_width, &data->image_height);
        data->floor = mlx_xpm_file_to_image(data->mlx_ptr, "./textures/wall.xpm",
                        &data->image_width, &data->image_height);
        data->flame = mlx_xpm_file_to_image(data->mlx_ptr, "./textures/potion.xpm",
                        &data->image_width, &data->image_height);
        fill_items2(data);
        check_file(data);
}

void    fill_items2(t_vars *data)
{
        data->player_left = mlx_xpm_file_to_image(data->mlx_ptr,
                        "./textures/raven_left.xpm", &data->image_width,
                        &data->image_height);
        data->player_right = mlx_xpm_file_to_image(data->mlx_ptr,
                        "./textures/raven_right.xpm", &data->image_width,
                        &data->image_height);
}

void    map_draw(t_vars *data, int i, int j)
{
        if (data->map[i][j] == '1')
                mlx_put_image_to_window(data->mlx_ptr, data->mlx_window, data->wall, j
                        * 30, i * 30);
        else if (data->map[i][j] == '0')
                mlx_put_image_to_window(data->mlx_ptr, data->mlx_window, data->floor, j
                        * 30, i * 30);
        else if (data->map[i][j] == 'E')
		mlx_put_image_to_window(data->mlx_ptr, data->mlx_window, data->exit,
                                j * 30, i * 30);
        else if (data->map[i][j] == 'C')
                mlx_put_image_to_window(data->mlx_ptr, data->mlx_window, data->flame, j
                        * 30, i * 30);
}

void    draw_player(t_vars *data, int i, int j)
{
        if (data->map[i][j] == 'P')
        {
                if (data->left)
                        mlx_put_image_to_window(data->mlx_ptr, data->mlx_window,
                                data->player_left, j * 30, i * 30);
                else if (data->right)
                        mlx_put_image_to_window(data->mlx_ptr, data->mlx_window,
                                data->player_right, j * 30, i * 30);
                else
                        mlx_put_image_to_window(data->mlx_ptr, data->mlx_window,
                                data->raven, j * 30, i * 30);
        }
}
