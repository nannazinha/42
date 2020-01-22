/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:44:19 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/12 15:59:24 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *temp;
	int i;

	temp = dest;
	i = 0;
	while (i < n)
	{
		*dest = *src;
		i++;
	}
	*dest = '\0';
	return (temp);
}
