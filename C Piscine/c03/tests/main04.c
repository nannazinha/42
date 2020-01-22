/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 04:17:55 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/14 04:22:18 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char string[20] = "Piscina da 42";
	char to_find[10] = "42";
	char *temp;

	temp = ft_strstr(string, to_find);
	printf("A primeira ocorrência na string é: %s\n", temp);
	return (0);
}
