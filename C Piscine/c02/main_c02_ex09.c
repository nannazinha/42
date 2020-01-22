/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c02_ex09.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:43:22 by mmirabet          #+#    #+#             */
/*   Updated: 2019/10/08 14:43:26 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str);

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
	char teste1[] = "ol\'a, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char teste2[] = "";
	char teste3[] = "AbC edf";
	char teste4[] = "abc";
	char teste5[] = "AB       bCd";
	char teste6[] = "aaaaa123A567";
	char teste7[] = "A()(*&$%afiadfAIDSJFAIFasdfaf";

	ft_putstr("\nEsta é a string original: ");
	ft_putstr(teste1);
	ft_putstr("\n");
	ft_putstr("\nEsta é a string capitalizada: ");
	ft_strcapitalize(teste1);
	ft_putstr(teste1);
	ft_putstr("\n");

	ft_putstr("\nEsta é a string original: ");
	ft_putstr(teste2);
	ft_putstr("\n");
	ft_putstr("\nEsta é a string capitalizada: ");
	ft_strcapitalize(teste2);
	ft_putstr(teste2);
	ft_putstr("\n");

	ft_putstr("\nEsta é a string original: ");
	ft_putstr(teste3);
	ft_putstr("\n");
	ft_putstr("\nEsta é a string capitalizada: ");
	ft_strcapitalize(teste3);
	ft_putstr(teste3);
	ft_putstr("\n");

	ft_putstr("\nEsta é a string original: ");
	ft_putstr(teste4);
	ft_putstr("\n");
	ft_putstr("\nEsta é a string capitalizada: ");
	ft_strcapitalize(teste4);
	ft_putstr(teste4);
	ft_putstr("\n");

	ft_putstr("\nEsta é a string original: ");
	ft_putstr(teste5);
	ft_putstr("\n");
	ft_putstr("\nEsta é a string capitalizada: ");
	ft_strcapitalize(teste5);
	ft_putstr(teste5);
	ft_putstr("\n");

	ft_putstr("\nEsta é a string original: ");
	ft_putstr(teste6);
	ft_putstr("\n");
	ft_putstr("\nEsta é a string capitalizada: ");
	ft_strcapitalize(teste6);
	ft_putstr(teste6);
	ft_putstr("\n");

	ft_putstr("\nEsta é a string original: ");
	ft_putstr(teste7);
	ft_putstr("\n");
	ft_putstr("\nEsta é a string capitalizada: ");
	ft_strcapitalize(teste7);
	ft_putstr(teste7);
	ft_putstr("\n");



	return (0);
}
