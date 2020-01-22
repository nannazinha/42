/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 22:24:51 by vschiavo          #+#    #+#             */
/*   Updated: 2019/10/13 20:58:44 by vschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_matrix(char *arg, int tab1[6][6]);

void	ft_print_table(int tab[6][6]);

int		ft_solve_problem(int tab[6][6]);

int	ft_CountChar(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int		ft_val_arg(char *arg)
{
	int i;

	i = 0;
	while (arg[i] != 0)
	{
		if (i % 2 == 0)
		{
			if (arg[i] != '1' && arg[i] != '2' && arg[i] != '3' && arg[i] != '4')
				return (1);
		}
		else if (arg[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int tab1[6][6];
	int	n;
	int r;

	n = 0;
	r = 0;
	if (argc != 2)
		return (write(1, "Error\n", 6));
	n = ft_CountChar(argv[1]);
	if (n != 31)
		return (write(1, "Error\n", 6));
	if (ft_val_arg(argv[1]))
		return (write(1, "Error\n", 6));
	ft_matrix(argv[1], tab1);
	if	(ft_solve_problem(tab1))
		return (write(1, "Error\n",6));
	ft_print_table(tab1);
	return (0);
}
