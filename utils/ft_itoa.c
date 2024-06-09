/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarda <hbarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:41:15 by hbarda            #+#    #+#             */
/*   Updated: 2024/06/09 11:47:34 by hbarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

size_t	ft_count_digits(int number)
{
	int	i;

	i = 0;
	while (number)
	{
		number /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int number)
{
	size_t		len;
	char		*str;
	long int	n;

	n = number;
	len = ft_count_digits(n);
	if (n < 0)
	{
		number *= -1;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	while (len--)
	{
		*(str + len) = (number % 10) + 48;
		number /= 10;
	}
	if (n < 0)
		*(str) = '-';
	return (str);
}
