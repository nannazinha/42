/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 11:27:34 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/20 22:00:07 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char **argv)
{
	int		path;
	char	*file;

	if (argc != 2)
		is_error();
	if (is_valid(argv[1]) == 0)
		is_error();
	else
	{
		path = open("numbers.dict", O_RDONLY);
		if (path < 0)
			is_error();
		file = malloc(4000);
		read(path, file, 4000);
		ft_putstr(file);
		if (close(path) < 0)
			is_error();
		free(file);
	}
	write(1, "\n", 1);
	return (0);
}

void	is_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int	is_valid(char *str)
{
	int	*n;

	n = 0;
	while (*str != '\0')
	{
		if ((*str < '0') || (*str > '9'))
			return (0);
		str++;
	}
	return (1);
}

void	ft_putstr(char *str)
{
	char	c;

	while (*str != '\0')
	{
		c = *str;
		write(1, &c, 1);
		str++;
	}
}
