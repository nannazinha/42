/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <ntorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 00:28:22 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/16 22:24:55 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (*str == '\0')
		i = 1;
	else
	{
		while (*str != '\0')
		{
			if ((*str > 31) && (*str <= 127))
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
