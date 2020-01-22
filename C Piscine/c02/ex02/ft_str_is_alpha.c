/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:08:46 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/14 00:26:08 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (*str == '\0')
		i = 1;
	else
	{
		while (*str != '\0')
		{
			if (((*str > 64) && (*str < 91)) || ((*str > 96) && (*str < 123)))
				i = 1;
			else
			{
				i = 0;
				break ;
			}
			str++;
		}
	}
	return (i);
}