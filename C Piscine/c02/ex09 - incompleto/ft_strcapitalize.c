/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 00:58:11 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/14 01:00:32 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcapitalize(char *str)
{
	int i;
	
	i = 0;
	while (*str != '\0')
	{
		if ((*str > 96) && (*str < 123))
			*str -= 32;
		str++;
	}
	return (*str);
}
