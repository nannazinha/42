/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c02_ex11.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:43:22 by mmirabet          #+#    #+#             */
/*   Updated: 2019/10/12 07:17:24 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_convertdechex(int dec, char *hex);
void ft_putstr_non_printable(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != 0)
		{
			ft_putchar(str[index]);
			index++;
		}
}

void    ft_putnbr(int nb)
{
	int    digit;

	digit = nb % 10;
	if (digit < 0)
		digit *= -1;
	if (nb < 10 && nb > -10)
		{
			if (nb < 0)
				ft_putchar('-');
			ft_putchar('0' + digit);
		}
	else
		{
			ft_putnbr(nb / 10);
			ft_putchar('0' + digit);
		}
}


int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr_non_printable(argv[1]);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
