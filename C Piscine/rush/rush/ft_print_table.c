/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 12:40:41 by vschiavo          #+#    #+#             */
/*   Updated: 2019/10/13 13:22:04 by vschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_table(int tab[6][6])
{
	int		lin;
	int		col;
	char	c;

	lin = 1;
	while (lin < 5)
	{
		col = 1;
		while (col < 5)
		{
			c = tab[lin][col] + '0';
			write(1, &c, 1);
			if (col != 4)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		lin++;
	}
}
