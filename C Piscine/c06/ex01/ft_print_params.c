/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:57:59 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/23 05:19:51 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_params(char *argv)
{
	while (*argv != '\0')
	{
		write(1, &*argv, 1);
		argv++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int	i;

	(void)argc;
	(void)argv;
	i = 1;
	while (i < argc)
	{
		print_params(argv[i]);
		i++;
	}
	return (0);
}
