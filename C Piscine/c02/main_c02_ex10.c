/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c02_ex10.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:43:22 by mmirabet          #+#    #+#             */
/*   Updated: 2019/10/08 14:43:26 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

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


int	main(void)
{
	int size;
	char source1[] = "abcdefghij";
	char destination1[] = "01234567890123456789";
	char source2[] = "abcdefghij";
	char destination2[] = "01234567890123456789";



	ft_putstr("\nCadeia de caracteres fonte: ");
	ft_putstr(source1);
	ft_putchar('\n');
	ft_putstr("Cadeia de caracteres destino: ");
	ft_putstr(destination1);
	ft_putchar('\n');
	ft_putstr("Copiando com strlcpy...\n");
	size = strlcpy(destination1, source1, 7);
	ft_putstr("Cadeia de caracteres fonte: ");
	ft_putstr(source1);
	ft_putchar('\n');
	ft_putstr("Cadeia de caracteres destino: ");
	ft_putstr(destination1);
	ft_putstr("\n\nTamanho da cadeia fonte: ");
	ft_putnbr(size);
	ft_putstr("\n\n");

	ft_putstr("Cadeia de caracteres fonte: ");
	ft_putstr(source2);
	ft_putchar('\n');
	ft_putstr("Cadeia de caracteres destino: ");
	ft_putstr(destination2);
	ft_putchar('\n');
	ft_putstr("Copiando com ft_strlcpy...\n");
	size = ft_strlcpy(destination2, source2, 7);
	ft_putstr("Cadeia de caracteres fonte: ");
	ft_putstr(source2);
	ft_putchar('\n');
	ft_putstr("Cadeia de caracteres destino: ");
	ft_putstr(destination2);
	ft_putstr("\n\nTamanho da cadeia fonte: ");
	ft_putnbr(size);
	ft_putstr("\n\n");
	return (0);
}
