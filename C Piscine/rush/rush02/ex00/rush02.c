/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 10:30:59 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/20 21:38:33 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	translate(char *str)
{
	char *aux;
	int i;
	int len;

	i = 0;
	len = ft_strlen(str);
	while(*str != '\0')
	{
		*aux = 0;
		if(len == 1)
			print *str;
		else if (len == 2)
		{
			*aux = *str;
			aux++;
			*aux = '0';
			print *aux;
			len--;
		}
		else if(len > 2)
		{
			print *str;
			i = len - 1;
			*aux = '1';
			while(i > 0)
			{
				aux++;
				*aux = '0';
				i--;
			}
			print *aux;
			len--
		}
		str++;
	}
}

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while(*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

void	ft_putstr(char *str)
{
	char c;

	while(*str != '\0')
	{
		c = *str;
		write(1, &c, 1);
		str++;
	}
}
