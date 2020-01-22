/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 18:49:50 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/06 19:45:08 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush04.h"

int	size_one(int x, int y, char m, char n)
{
	ft_putchar(m);
	if (x > 1)
		ft_putchar(n);
	ft_putchar('\n');
	if (y > 1)
	{
		ft_putchar(n);
		if (x > 1)
			ft_putchar(m);
		ft_putchar('\n');
	}
	return (0);
}

int	row_one(int x, char m, char n)
{
	int i;

	i = 0;
	ft_putchar(m);
	while (i < (x - 2))
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar(n);
	ft_putchar('\n');
	return (0);
}

int	col_one(int y, char m, char n)
{
	int i;

	i = 0;
	ft_putchar(m);
	ft_putchar('\n');
	while (i < (y - 2))
	{
		ft_putchar('B');
		ft_putchar('\n');
		i++;
	}
	if (y > 1)
		ft_putchar(n);
	ft_putchar('\n');
	return (0);
}

int	infinity(int x, int y)
{
	int i;

	while ((y - 2) > 0)
	{
		ft_putchar('B');
		i = 0;
		while (i < (x - 2))
		{
			ft_putchar(' ');
			i = i + 1;
		}
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');	
		y = y - 1;
	}
	return (0);
}

int	rush(int x, int y)
{
	char m;
	char n;

	m = 'A';
	n = 'C';
	if ((x > 2) && (y > 2))
	{
		row_one(x, m, n);
		infinity(x, y);
		row_one(x, n, m);
	}
	else if ((x > 2) && (y == 2))
	{
		row_one(x, m, n);
		row_one(x, n, m);
	}
	else if ((x > 2) && (y == 1))
		row_one(x, m, n);
	else if ((x == 1) && (y > 2))
		col_one(y, m, n);
	else if (((x == 1) || (x == 2)) && ((y == 1) || (y == 2)))
		size_one(x, y, m, n);
	return (0);
}
