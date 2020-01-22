/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:26:20 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/23 05:21:28 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_rev_params(char *argv)
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
	int i;

	(void)argc;
	(void)argv;
	i = argc;
	while (i > 1)
	{
		print_rev_params(argv[i - 1]);
		i--;
	}
	return (0);
}
