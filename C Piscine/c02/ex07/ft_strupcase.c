/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 00:38:55 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/16 15:43:29 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *temp;

	temp = str;
	while (*str != '\0')
	{
		if ((*str > 96) && (*str < 123))
			*str -= 32;
		str++;
	}
	return (temp);
}