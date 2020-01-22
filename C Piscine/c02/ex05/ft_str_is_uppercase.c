/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 00:14:14 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/15 18:47:56 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if (*str == '\0')
		i = 1;
	else
	{
		while (*str != '\0')
		{
			if ((*str > 64) && (*str < 91))
				i = 1;
			else
			{
				i = 0;
				return (0);
			}
			str++;
		}
	}
	return (i);
}
