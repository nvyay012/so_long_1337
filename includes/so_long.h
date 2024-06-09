#ifndef SO_LONG_H
# define SO_LONG_H

# define UP_KEY 65362
# define LEFT_KEY 65361
# define DOWN_KEY 65364
# define RIGHT_KEY 65363
# define A 97
# define W 119
# define S 115
# define D 100
# define Q 113
# define ESC 65307

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdio.h>
# include <stdlib.h>
# include "mlx.h"
# include <string.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_vars
{
    int		height;
	int		width;
	char	**map;
	char	**map2;
	void	*door;
	void	*mlx_ptr;
	void	*mlx_window;
	int		exit1;
	int		collectables;
	int		player;
	int		player_height;
	int		player_width;
	void	*raven;
	void	*exit_win;
	void	*wall;
	void	*floor;
	void	*exit;
	void	*flame;
	void	*player_right;
	void	*player_left;
	int		left;
	int		right;
	int		up;
	int		down;
	int		image_height;
	int		image_width;
	int		moves;
	int		keycode;
} t_vars;

char	*get_next_line(int fd);
char		*ft_strchr(const char *s, int c);
char		*get_next_line(int fd);
size_t		ft_strlen(const char *s);
void		*ft_memcpy(void *dest, const void *src, size_t n);
char		*ft_strjoin(char *s1, char *s2);
//-------------------------------------------------------------------------//
char		*ft_strdup(char *s);
size_t		ft_strlen2(char *str);
char		*ft_strrchr(const char *s, int c);
int			ft_strcmp(char *s1, char *s2);
size_t		ft_count_digits(int number);
char		*ft_itoa(int number);
int			ft_putstr(char *str);
int			ft_putchar(int c);
void		*ft_memset(void *b, int c, size_t len);
void		store_content(t_vars *data);
void		check_exist_items(t_vars *data);
void		map_check(char *path, t_vars *data);
void		map_width(char *path, t_vars *data);
void		map_arr(char *path, t_vars *data);
void		check_map_border(t_vars *data);
void		check_path(char *path);
void		player_position(t_vars *data);
void		fill_items(t_vars *data);
char		*get_next_line(int fd);
void		map_draw(t_vars *data, int i, int j);
int			close_window(t_vars *data);
void		up(t_vars *data);
void		down(t_vars *data);
void		left(t_vars *data);
void		right(t_vars *data);
void		check_file(t_vars *file);
void		print_up(t_vars *data);
void		print_down(t_vars *data);
void		print_left(t_vars *data);
void		print_right(t_vars *data);
int			draw_map(t_vars *data);
int			move_player(int keycode, t_vars *data);
void		flood_fill(t_vars *data, int i, int j);
void		flood_fill_checker(t_vars *data);
void		map_arr2(char *path, t_vars *data);
int			all_collected(t_vars *data);
void		map_rectangle(t_vars *data);
void		if_map_valid(t_vars *data);
void		fill_items2(t_vars *data);
void		draw_player(t_vars *data, int i, int j);
void		you_won(t_vars *data);
void		free_map(t_vars *data);
void		check_fd(int fd);
void		destroy_raven(t_vars *data);
void		destroy_flame(t_vars *data);
void		destroy_player_right(t_vars *data);
void		destroy_player_left(t_vars *data);
void		destroy_exit(t_vars *data);
void		destroy_wall(t_vars *data);
void		destroy_floor(t_vars *data);
void		clear(t_vars *data);

#endif