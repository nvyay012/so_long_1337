#include "../includes/so_long.h"

void    flood_fill(t_vars *data, int i, int j)
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

void    flood_fill_checker(t_vars *data)
{
        int     i;
        int     j;

        i = 0;
        while (i < data->height)
        {
                j = 0;
                while (j < data->width)
                {
                        if (data->map2[i][j] == 'E' || data->map2[i][j] == 'C')
                        {
                                write(1, "Error\nUnplayable MAP", 24);
                                close_window(data);
                                exit(1);
                        }
                        j++;
                }
                i++;
        }
}
