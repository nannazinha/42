/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 23:09:02 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/23 19:15:40 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *str;
	char *temp;
    int length;

	length = 0;
    while (src[length])
        length++;
    str = malloc(sizeof(*str) * (length + 1));
	temp = str;
    while (*src)
        *temp++ = *src++;
    *temp  = '\0';
    return (str);
}
